bool inorder(Node *root,int &prev)
    {
        if(!root)
        return true;
        if(!inorder(root->left,prev))
        return false;
        if(prev >= root->data)
        return false;
        
        prev=root->data;
        
        return inorder(root->right,prev);
    }
    bool isBST(Node* root) {
        // Your code here
        int prev=INT_MIN;
        return inorder(root,prev);
    }
