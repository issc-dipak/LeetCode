//ReverseWord in a string
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Solution{
public:
    string reverseWord(string s){
        stringstream ss(s);
        vector<string> Vs;
        string temp;
        while (ss >> temp){
            Vs.push_back(temp);
        }
        string ans;
        for (int i = Vs.size() - 1; i > 0; i--)
            ans += Vs[i] + " ";
            ans += Vs[0];
        return ans;
    }
};
int main(){
    Solution solution;
    string s = "the sky is blue";
    cout << solution.reverseWord(s) << endl;
    return 0;
}
