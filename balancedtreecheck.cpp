int isBalancedRec(Node* root) {
        if(root==NULL)
        return 0;
        int lh=isBalancedRec(root->left);
        int rh=isBalancedRec(root->right);
        if(lh==-1 || rh==-1 ||abs(lh-rh) > 1)
        return -1;
        
        return max(lh,rh)+1;
    }
    bool isBalanced(Node* root) {
        // Code here
        return (isBalancedRec(root)>0);
        
    }
