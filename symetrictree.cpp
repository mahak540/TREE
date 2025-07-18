bool isMirror(Node* leftsub,Node* rightsub)
  {
      if(leftsub==nullptr && rightsub==nullptr)
      return true;
      if(leftsub == nullptr || rightsub == nullptr || leftsub->data!=rightsub->data)
      {
          return false;
      }
      return isMirror(leftsub->left,rightsub->right) && isMirror(leftsub->right,rightsub->left);
  }
    bool isSymmetric(Node* root) {
        // Code here
        if(root==nullptr)
        return true;
        return isMirror(root->left,root->right);
    }
