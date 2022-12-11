/* Very slow --> can be improved */


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeft(struct TreeNode* root, bool isLeft) {
    if (!root) return 0;
    if (!root->left && !root->right) {
        return isLeft == true ? root->val : 0;
    }
    return sumOfLeft(root->left, 1) + sumOfLeft(root->right, 0);
}

int sumOfLeftLeaves(struct TreeNode* root){
    return sumOfLeft(root, 0);
}
