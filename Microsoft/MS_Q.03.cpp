// TC O(N^N) SC O(1)
void transpose(vector<vector<int> >& matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    transpose(matrix);
    int i=0,j=n-1;
    while(i<j){
        swap(matrix[i],matrix[j]);
        i++;
        j--;
    }
}