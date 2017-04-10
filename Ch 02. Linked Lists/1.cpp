#include "bits/stdc++.h"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> hash_set;
        ListNode* answer = head;
        ListNode* prev = nullptr;
        while(head != nullptr) {
            if (hash_set.count(head->val)) {
                prev->next = head->next;
            } else {
                hash_set.insert(head->val);
                prev = head;
            }
            head = head->next;
        }
        return answer;
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}
