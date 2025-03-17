#include <vector>
using namespace std;

class Solution {
public:
    bool isValidOriginal(vector<int>& derived) {
        int n = derived.size();
        
        // Function to check if we can reconstruct a valid binary array
        auto canReconstruct = [&](int first) -> bool {
            vector<int> original(n);
            original[0] = first;
            
            for (int i = 1; i < n; ++i) {
                original[i] = original[i - 1] ^ derived[i - 1];
            }
            
            return (original[n - 1] ^ original[0]) == derived[n - 1];
        };
        
        // Check for both possibilities: original[0] = 0 and original[0] = 1
        return canReconstruct(0) || canReconstruct(1);
    }
};
