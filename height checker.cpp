#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;  // Copy the heights array
    sort(expected.begin(), expected.end());  // Sort to get the expected order
    
    int count = 0;
    for (int i = 0; i < heights.size(); ++i) {
        if (heights[i] != expected[i]) {
            count++;  // Count mismatches
        }
    }
    return count;
}

int main() {
    vector<int> heights = {1, 1, 4, 2, 1, 3};
    cout << "Number of mismatches: " << heightChecker(heights) << endl;  
    // Expected Output: 3
    return 0;
}
