// https://leetcode.com/problems/distribute-coins-in-binary-tree/description/

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
public:
    int moves = 0;
    int dfs(TreeNode* root){
        if(!root) return 0;
        
        int l = dfs(root->left);
        int r = dfs(root->right);

        moves += abs(l);
        moves += abs(r);

        return root->val + l + r - 1;
    }
    int distributeCoins(TreeNode* root) {
        int count = dfs(root);
        return moves;    
    }
};