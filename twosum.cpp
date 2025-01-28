#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store numbers and their indices
        vector<int> result;

        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the complement

            // Check if the complement is already in the map
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]); // Index of the complement
                result.push_back(i);                // Current index
                return result; // Return the result immediately
            }

            // If not found, add the current number and its index to the map
            numMap[nums[i]] = i;
        }

        return result; // Return empty vector if no solution (problem guarantees one solution)
    }
};

int main() {
    Solution solution;

    // Input array and target
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Find two-sum indices
    vector<int> result = solution.twoSum(nums, target);

    // Print the result
    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
