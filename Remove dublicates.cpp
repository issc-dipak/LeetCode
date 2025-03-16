class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case: empty array

        int k = 1; // Start with the first element being unique
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // Move unique elements forward
                k++;
            }
        }
        return k;
    }
};
