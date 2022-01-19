// TC O(N) SC O(N)
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int x =a[n-1];
        v.push_back(x);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=x)
            {
                x=a[i];
                v.push_back(x);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};