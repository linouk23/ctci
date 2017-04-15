#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* nthFromEnd(ListNode* head, int n) {
        
        ListNode* answer = new ListNode(0);
        ListNode* p1 = answer;
        ListNode* p2 = answer;
        answer->next = head;
        
        for (int index = 1; index <= n; ++index) {
            if (p2 == nullptr) { return nullptr; }
            p2 = p2->next;
        }
        
        while(p2 != nullptr) {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        return p1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
