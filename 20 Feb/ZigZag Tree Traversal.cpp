class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        if(root == NULL) return {};
    	queue<Node*> q;
    	q.push(root);
    	vector<int> og_ans;
    	int flag = 1;
        while(!q.empty()) {
            vector<int> ans(q.size());
            int sz = q.size();
            for(int i = 0;i < sz;i++) {
                Node* node = q.front();
                ans[i] = node -> data;
                q.pop();
                if(node -> left) {
                    q.push(node -> left);
                }
                if(node -> right) {
                    q.push(node -> right);
                }
            }
            if(flag) {
                for(auto i : ans) {
                    og_ans.push_back(i);
                }
            } else {
                reverse(ans.begin(), ans.end());
                for(auto i : ans) {
                    og_ans.push_back(i);
                }
            }
            flag = !flag;
        }
        
        return og_ans;
    }
};