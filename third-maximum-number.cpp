#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        // Use a set to remove duplicates
        std::set<int> uniqueNums(nums.begin(), nums.end());
        
        // Convert the set back to a vector
        std::vector<int> distinctNums(uniqueNums.begin(), uniqueNums.end());
        
        // Sort the vector in descending order
        std::sort(distinctNums.rbegin(), distinctNums.rend());
        
        // Check if there are at least three distinct numbers
        if (distinctNums.size() >= 3) {
            return distinctNums[2];
        } else {
            return distinctNums[0];
        }
    }
};
