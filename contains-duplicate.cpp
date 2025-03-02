class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // Use unordered_set to store elements
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;  // Duplicate found
            }
            seen.insert(num);  // Add current number to the set
        }
        return false;  // No duplicates found
    }
};
