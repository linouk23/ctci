#include "bits/stdc++.h"

using namespace std;

class Solution {
    void sort(stack<int> cur) {
        stack<int> res;
        while(!cur.empty()) {
            int tmp = cur.top();
            cur.pop();
            while(!res.empty() && res.top() > tmp) {
                int val = res.top();
                res.pop();
                cur.push(val);
            }
            res.push(tmp);
        }
        
        while(!res.empty()) {
            int val = res.top();
            res.pop();
            cur.push(val);
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
