#include "bits/stdc++.h"

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Postorder: think about order of getting result for nodes.
class Solution {
public:
    bool is_valid_helper(TreeNode* node, long long min_val, long long max_val) {
        if (node == nullptr) { return true; }
        bool is_ok = ((long long)node->val > min_val && (long long)node->val < max_val);
        if (!is_ok) { return false; }
        bool is_valid_left_tree = is_valid_helper(node->left, min_val, node->val);
        bool is_valid_right_tree = is_valid_helper(node->right, node->val, max_val);   
        return is_valid_left_tree && is_valid_right_tree;
    }
    
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) { return true; }
        long long INF = 1e10;
        return is_valid_helper(root->left, -INF, root->val) &&
        is_valid_helper(root->right, root->val, INF);
    }
};

int main() {
    ios::sync_with_stdio(false);
    
    return 0;
}