class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        // Step 1: Mark each number in the nums array
        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]) - 1;  // Find the corresponding index
            if (nums[num] > 0) {
                nums[num] = -nums[num];  // Mark the element as visited by making it negative
            }
        }
        
        // Step 2: Find the numbers that are not marked
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);  // Add the missing number to the result
            }
        }
        
        return result;
    }
};
