void inorder(Node* root,vector<int>& nodes)
  {
      if(root==NULL)
      return ;
      inorder(root->left,nodes);
      nodes.push_back(root->data);
      inorder(root->right,nodes);
  }
  Node *build(vector<int>& nodes,int s,int e)
  {
      if(s>e)
      return NULL;
      int mid=(s+e)/2;
      Node *root=new Node(nodes[mid]);
      root->left=build(nodes,s,mid-1);
      root->right=build(nodes,mid+1,e);
      
      return root;
  }
    Node* balanceBST(Node* root) {
        // Code here
        vector<int>nodes;
        inorder(root,nodes);
        return build(nodes,0,nodes.size()-1);
        
    }
