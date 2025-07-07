vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        if(root==nullptr)
        return {};
        queue<Node *>q;
        vector<vector<int>>res;
        q.push(root);
        int curr=0;
        while(!q.empty())
        {
            int len=q.size();
            res.push_back({});
            for(int i=0;i<len;i++)
            {
                Node *node=q.front();
                q.pop();
                res[curr].push_back(node->data);
                if(node->left!=nullptr)
                q.push(node->left);
                if(node->right!=nullptr)
                q.push(node->right);
                
            }
            curr++;
            
        }
        return res;
    }
