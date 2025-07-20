int minvaccine(Node* root,int& res)
  {
      if(root==NULL)
      return 1;
      int l=minvaccine(root->left,res);
      int r=minvaccine(root->right,res);
      
      if(l==0||r==0)
      {
          res++;
          return 2;
      }
      if(l==2 || r==2)
      {
          return 1;
      }
      return 0;
  }
    int supplyVaccine(Node* root) {
        // Your code here
        int res=0;
        if(minvaccine(root,res)==0)
        {
            res++;
        }
        return res;
        
    }
