#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool is_permutation_of_palindrome(const string &str) {
        unordered_map<char, int> hash_map;
        for (char ch : str) {
            hash_map[ch] += 1;
        }
        
        bool has_odd_found = false;
        for (const auto & it : hash_map) {
            if (it.second % 2 == 1) {
                if (!has_odd_found) {
                    has_odd_found = true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.is_permutation_of_palindrome("aabbb") == true);
    assert(solution.is_permutation_of_palindrome("") == true);
    assert(solution.is_permutation_of_palindrome("bbabb") == true);
    assert(solution.is_permutation_of_palindrome("bb") == true);
    assert(solution.is_permutation_of_palindrome("q") == true);
    assert(solution.is_permutation_of_palindrome("") == true);
    
    return 0;
}
