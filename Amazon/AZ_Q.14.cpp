// TC O(N) SC O(height of tree)

class Solution {
  public:
  int ans =0;
   int diameter(Node* root,int t) {
      if(root==NULL) return 0;
      int x=diameter(root->left,t),y=diameter(root->right,t);
        if(root->data==t)
        {
           ans=max(x,y);
           return -1;
        }
        if(x<0) 
        {
            x=abs(x);
            ans=max(ans,x+y);
            return -1-x;
        }
        if(y<0) 
        { 
            y=abs(y);
            ans=max(ans,x+y);
            return -1-y;
        }
        if(x<y) 
            return(y+1);
        else 
            return x+1;
    }

   int minTime(Node* root, int target) 
   {  
      diameter(root,target);
      return ans;
   }
};