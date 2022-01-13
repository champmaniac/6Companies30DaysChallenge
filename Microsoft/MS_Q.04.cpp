// TC O(R*C)
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int left =0, right=c-1,top=0,bottom=r-1,ctr=0;
        vector<int> vec;
        while(left<=right && top<=bottom){
            if(ctr==0){
                for(int i=left;i<=right;i++){
                    vec.push_back(matrix[top][i]);
                }
                top++;
                ctr++;
            }
            else if(ctr==1){
                for(int i=top;i<=bottom;i++){
                    vec.push_back(matrix[i][right]);
                }
                right--;
                ctr++;
            }
            else if(ctr==2){
                for(int i=right;i>=left;i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
                ctr++;
            }
            else
            {
                for(int i=bottom;i>=top;i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
                ctr++;
            }
            ctr=ctr%4;
        }
        return vec;
    }
};