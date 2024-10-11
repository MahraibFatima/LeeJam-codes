/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int checkHeight(TreeNode* root){
        if(root == nullptr) return 0;
        int lh = checkHeight(root->left);
        if(lh == -1) return -1;  // Left subtree is not balanced
        
        int rh = checkHeight(root->right);
        if(rh == -1) return -1;  // Right subtree is not balanced
        
        if(abs(lh-rh)>1)   return -1;

        return (1 + std::max(lh,rh));

    }
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};