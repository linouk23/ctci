#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool is_unique_chars(const string &str) {
        unordered_set<char> hash_set;
        for (char ch : str) {
            if (hash_set.count(ch)) {
                return false;
            }
            hash_set.insert(ch);
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.is_unique_chars("qwrabcde") == true);
    assert(solution.is_unique_chars("qweabcde") == false);
    assert(solution.is_unique_chars("") == true);
    
    return 0;
}
