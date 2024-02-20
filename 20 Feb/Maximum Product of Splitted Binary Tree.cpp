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
int mod = 1e9 + 7;
long long maxi = 1;
class Solution {
    int sum(TreeNode* root) {
        if(!root) return 0;
        return (root -> val + sum(root -> left) + sum(root -> right)); 
    }

    int maxPro(TreeNode* root, int summ) {
        if(!root) return 0;
        int left = maxPro(root -> left, summ);
        int right = maxPro(root -> right, summ);
        maxi = max(maxi, (1ll*(root -> val + left + right) * (summ - left - right - root -> val)));
    
        return root -> val + left + right;
    }
public:
    int maxProduct(TreeNode* root) {
        int summ = sum(root);
        maxi = 1;
        maxPro(root, summ);
        return maxi % mod;
    }
};