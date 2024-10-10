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
    void helperPostorder(TreeNode* root, vector<int>& postorder){
        if(root == nullptr)
            return;

        helperPostorder(root->left, postorder);
        helperPostorder(root->right, postorder);
        postorder.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        helperPostorder(root, postorder);
        return postorder;
    }


};