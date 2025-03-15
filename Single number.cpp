#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  // XOR all elements
    }
    return result;
}

int main() {
    vector<int> nums = {2, 2, 1};
    cout << "Output: " << singleNumber(nums) << endl;  // Output: 1
    return 0;
}
