// TC O(N) SC O(1) 
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int l=0;
        int r =0;
        int count =0;
        vector<int> res;
        while(r<=n){
            if(count==s){
                res.push_back(l+1);
                res.push_back(r);
                return res;
            }
            if(l==r || count <s){
                r++;
                count+= arr[r-1];
            }
            else
            {
                l++;
                count-= arr[l-1];
            }
        }
        res.push_back(-1);
        return res;
    }
};