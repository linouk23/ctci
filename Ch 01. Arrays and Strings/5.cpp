#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool is_one_edit_away(const string & str1, const string & str2) {
        for (int index = 0; index < min(str1.length(), str2.length()); ++index) {
            if (str1[index] == str2[index]) { continue; }
            
            if (str1.length() == str2.length()) { // Replacement
                return str1.substr(index + 1) == str2.substr(index + 1);
            } else if (str1.length() < str2.length()) { // Insertion
                return str1.substr(index) == str2.substr(index + 1);
            } else { // Removal
                return str1.substr(index + 1) == str2.substr(index);
            }
        }
        
        // The first min(str1.length(), str2.length() are the same.
        return (abs((int)str1.length() - (int)str2.length())) == 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    Solution solution;
    
    assert(solution.is_one_edit_away("", "") == false);
    assert(solution.is_one_edit_away("aaaa", "bbbb") == false);
    assert(solution.is_one_edit_away("b", "a") == true);
    assert(solution.is_one_edit_away("aBc", "aDc") == true);
    assert(solution.is_one_edit_away("aDbc", "abc") == true);
    assert(solution.is_one_edit_away("abc", "aDbc") == true);
    
    return 0;
}
