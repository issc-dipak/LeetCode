#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero_pos = 0;  // Pointer to track the position of the next non-zero element
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                // Swap the current non-zero element with the element at non_zero_pos
                swap(nums[non_zero_pos], nums[i]);
                non_zero_pos++;  // Move the position for the next non-zero element
            }
        }
    }
};
