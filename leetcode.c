class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int Lcount = maxDepth(root->left);
        int Rcount = maxDepth(root->right);
        return max(Lcount,Rcount)+1;
    }
};
