class Solution {
public:
    bool isValid(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }

    bool validate(TreeNode* node, long long low, long long high) {
        if (node == nullptr) return true;

        if (node->val <= low || node->val >= high)
            return false;

        return validate(node->left, low, node->val) &&
               validate(node->right, node->val, high);
    }
};