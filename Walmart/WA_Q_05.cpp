class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int sum(Node* root){
        if(root==NULL) return 0;
        return sum(root->left)+sum(root->right)+root->data;
    }
    void toSumTree(Node *root)
    {
        // Your code here
        if(root==NULL) return;
        
        int s = sum(root)-root->data;
        root->data=s;
        
        toSumTree(root->left);
        toSumTree(root->right);
    }
};