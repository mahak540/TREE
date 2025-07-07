int recheight(Node* root,int &res)
  {
      if(root==NULL)
        return 0;
        int l=recheight(root->left,res);
        int r=recheight(root->right,res);
        res=max(res,l+r);
        
        return 1+max(l,r);
  }
  
    int diameter(Node* root) {
        // Your code here
        int res=0;
        recheight(root,res);
        return res;
        
        
    }
