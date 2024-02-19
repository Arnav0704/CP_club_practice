class Solution {
private:
    void f(TreeNode* root, vector<int> &ans)
{
    if (root == NULL)
        return;
 
    queue<pair<TreeNode*, int>> q;
    int curr = -1;
    q.push({root, 0});
 
    while (!q.empty()) {
         
        auto n = q.front();
        // cout << node -> val << ' ';
        q.pop();
        TreeNode* node = n.first;
        int level = n.second;
        if(curr < level) {
            ans.push_back(node->val);
            curr = level;
        } 
        if (node->right != NULL)
            q.push({node->right, level + 1});
        if (node->left != NULL)
            q.push({node->left, level + 1});
 
    }
}
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        f(root, ans);
        return ans;
    }
};