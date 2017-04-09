#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool permutation(const string &str1, const string &str2) {
        if (str1.length() != str2.length()) { return false; }
        
        vector<int> freq(256, 0);
        for (char ch : str1) {
            ++freq[ch - 'a'];
        }
        
        for (char ch : str2) {
            --freq[ch - 'a'];
        }
        
        for (int count : freq) {
            if (count != 0) { return false; }
        }
        
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.permutation("aaa", "aaa") == true);
    assert(solution.permutation("aa", "ab") == false);
    assert(solution.permutation("", "") == true);
    
    return 0;
}
