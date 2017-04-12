#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* next(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }
        return head->next;
    }
    
    ListNode* detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        do {
            slow = next(slow);
            fast = next(next(fast));
        } while (slow != fast && fast != nullptr);
        
        if (fast == nullptr) {
            return nullptr;
        }
        
        slow = head;
        while (slow != fast) {
            slow = next(slow);
            fast = next(fast);
        }
        
        return slow;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
