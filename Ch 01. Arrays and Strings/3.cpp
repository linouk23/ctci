#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string replace_spaces(string str) {
        string answer;
        for (char ch : str) {
            if (ch == ' ') {
                answer += "%20";
            } else {
                answer.push_back(ch);
            }
        }
        return answer;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.replace_spaces("Mr John Smith") == "Mr%20John%20Smith");
    assert(solution.replace_spaces("   Smi th ") == "%20%20%20Smi%20th%20");
    assert(solution.replace_spaces("") == "");
    
    return 0;
}
