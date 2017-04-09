#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string compress(const string & str) {
        if (str.empty()) { return ""; }
        string answer;
        char cur_symbol = str[0];
        int count = 1;
        
        for (int index = 1; index < (int)str.length(); ++index) {
            if (str[index] != cur_symbol) {
                answer.push_back(cur_symbol);
                answer += to_string(count);
                count = 1;
                cur_symbol = str[index];
            } else {
                ++count;
            }
        }
        answer.push_back(cur_symbol);
        answer += to_string(count);
        return answer;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.compress("aabcccccaaa") == "a2b1c5a3");
    assert(solution.compress("aba") == "a1b1a1");
    assert(solution.compress("a") == "a1");
    assert(solution.compress("") == "");
    
    return 0;
}
