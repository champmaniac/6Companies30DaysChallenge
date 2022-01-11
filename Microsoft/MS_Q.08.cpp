// TC O(N) SC O(N)
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(!root) return;
       queue<Node*> q;
       q.push(root);
       
       while(!q.empty()){
           Node* prev;
           int n = q.size();
           
           for(int i=0;i<n;i++){
               prev = q.front();
               q.pop();
               Node *curr = NULL;
               if(!q.empty() && i!=n-1)
                curr = q.front();
                
                prev->nextRight =curr;
                if(prev->left) q.push(prev->left);
                if(prev->right) q.push(prev->right);
           }
       }
    }    
      
};