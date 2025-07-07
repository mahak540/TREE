 vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>res;
        Node *curr=root;
        while(curr!=NULL)
        {
        if(curr->left==NULL)
        {
            res.push_back(curr->data);
            curr=curr->right;
        }
        else{
            Node *prev=curr->left;
            while(prev->right!=NULL && prev->right!=curr)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                prev->right=curr;
                curr=curr->left;
            }
            else{
                prev->right=NULL;
                res.push_back(curr->data);
                curr=curr->right;
            }
        }
        }
       return res;
    }
