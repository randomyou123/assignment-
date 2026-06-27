class Solution {
public:

    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder,
                    int preStart, int inStart, int inEnd) {

        if (inStart > inEnd)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[preStart]);

        int index = mp[root->val];

        int leftSize = index - inStart;

        root->left = build(preorder, inorder,
                           preStart + 1,
                           inStart,
                           index - 1);

        root->right = build(preorder, inorder,
                            preStart + leftSize + 1,
                            index + 1,
                            inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        return build(preorder, inorder,
                     0,
                     0,
                     inorder.size() - 1);
    }
};