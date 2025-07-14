int countpath(Node *root, int k,int curr,unordered_map<int,int>& presum) {
        // code here
        if(!root)
        return 0;
        int cnt=0;
        curr+=root->data;
        if(curr==k)
        cnt++;
        
        cnt+=presum[curr-k];
        presum[curr]++;
        
        cnt+=countpath(root->left,k,curr,presum);
        cnt+=countpath(root->right,k,curr,presum);
        
        presum[curr]--;
        return cnt;
        
    }
    int sumK(Node *root, int k) {
        // code here
        unordered_map<int,int> presum;
        return countpath(root,k,0,presum);
        
    }
