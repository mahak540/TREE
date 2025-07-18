  vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
        if(!root)
        return {};
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty())
        {
            pair<Node*,int>p=q.front();
            Node* node=p.first;
            int hd=p.second;
            q.pop();
            mp[hd].push_back(node->data);
            
            if(node->left!=NULL)
            q.push({node->left,hd-1});
             if(node->right!=NULL)
            q.push({node->right,hd+1});
            
        }
        vector<vector<int>>res;
        for(auto it=mp.begin();it!=mp.end();++it)
        {
            res.push_back(it->second);
        }
        return res;
        
        
    }
