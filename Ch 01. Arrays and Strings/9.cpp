#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool is_rotation(const string & str1, const string & str2) {
        if (str1.length() == str2.length() && str1.length() > 0) {
            string double_str1 = str1 + str1;
            return is_substring(double_str1, str2);
        }
        return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
