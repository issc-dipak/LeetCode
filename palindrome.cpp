class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers are not palindromes
        
        long reversed = 0, original = x;
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        return original == reversed;
    }
};
