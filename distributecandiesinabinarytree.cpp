int distributecandyUtil(Node* root,int &ans) {
        if(root==NULL)
        return 0;
        int l=distributecandyUtil(root->left,ans);
        int r=distributecandyUtil(root->right,ans);
        
        ans+=abs(l)+abs(r);
        return root->data+l+r-1;
    }
    int distributeCandy(Node* root) {
        int ans=0;
        distributecandyUtil(root,ans);
        return ans;
    }
