#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int> maxHeap(stones.begin(), stones.end());

        while (maxHeap.size() > 1) {
            int stone1 = maxHeap.top(); maxHeap.pop();
            int stone2 = maxHeap.top(); maxHeap.pop();

            if (stone1 != stone2) {
                maxHeap.push(stone1 - stone2);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};

int main() {
    Solution sol;
    std::vector<int> stones = {2,7,4,1,8,1};
    
    std::cout << "Last stone weight: " << sol.lastStoneWeight(stones) << std::endl;
    return 0;
}
