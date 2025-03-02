class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0], count = 1;

        // First pass: Find the candidate
        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            } else if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Second pass: Since the majority element always exists, we don't need to check again.
        return candidate;
    }
};
