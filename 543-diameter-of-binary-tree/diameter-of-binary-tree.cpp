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
int diameter = 0;
private:
    int CalcHeight(TreeNode* root){
        if(root == nullptr) return 0;

        int lh = CalcHeight(root->left);
        int rh = CalcHeight(root->right);

        diameter = max(diameter, lh+rh);

        return 1+ max(lh, rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        CalcHeight(root);
        return diameter;
    }
};