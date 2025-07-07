 int height(Node* node) {
        queue<Node*>q;
        q.push(node);
        int h=0;
        
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                Node *curr=q.front();
                q.pop();
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
            h++;
        }
        return h-1;
 }
