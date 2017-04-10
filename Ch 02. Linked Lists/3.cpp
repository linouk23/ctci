#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void delete_node(ListNode* node) {
        if (node == nullptr || node->next == nullptr) { return; }
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
