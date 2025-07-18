void DFS(Node* root,int hd,int &mn,unordered_map<int,vector<int>>&mp){
      if(root==NULL)
      return;
      mp[hd].push_back(root->data);
      mn=min(mn,hd);
      
      DFS(root->left,hd-1,mn,mp);
      DFS(root->right,hd+1,mn,mp);
  }
    vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
        unordered_map<int,vector<int>>mp;
        int mn=0;
        DFS(root,0,mn,mp);
        vector<vector<int>>res;
        int hd=mn;
        while(mp.find(hd)!=mp.end())
        {
            res.push_back(mp[hd]);
            hd++;
        }
        return res;
        
    }
