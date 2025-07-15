void correct(Node* root,Node* &first,Node* &middle,Node* &last,Node* &prev) {
      if(root==NULL)
      return ;
      correct(root->left,first,middle,last,prev);
      if(prev && root->data<prev->data)
      {
          if(!first)
          {
              first=prev;
              middle=root;
          }
          else
          last=root;
      }
      prev=root;
      correct(root->right,first,middle,last,prev);
  }
    void correctBST(Node* root) {
        // add code here.
        Node *first=NULL,*middle=NULL,*last=NULL,*prev=NULL;
        correct(root,first,middle,last,prev);
        if(first && last)
        swap(first->data,last->data);
        else if(first && middle)
        swap(first->data,middle->data);
    }
