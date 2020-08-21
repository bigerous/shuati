/*
 * @lc app=leetcode.cn id=951 lang=cpp
 *
 * [951] 翻转等价二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL)
            return true;
        if (root1 == NULL)
            return false;
        if (root2 == NULL)
            return false;
        if (root1->val != root2->val) 
            return false;
        return (flipEquiv(root1->left,root2->left)&&flipEquiv(root1->right,root2->right))||
        (flipEquiv(root1->left,root2->right)&&flipEquiv(root1->right,root2->left));
        
    }
};
// @lc code=end

