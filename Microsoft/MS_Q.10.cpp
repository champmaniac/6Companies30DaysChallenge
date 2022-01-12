// TC O(N) SC O(N)
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int dp[n+1]={0};
        dp[1]=arr[0];
        for(int i=1;i<n;i++){
            dp[i+1]=max(dp[i-1]+arr[i],dp[i]);
        }
        return dp[n];
        
        
        
        // int a=0,b=arr[0];
        // if(n==1) return arr[0];
        
        // for(int i=2;i<=n;i++){
        //     int c = max(b,a+arr[i-1]);
        //     a=b;
        //     b=c;
        // }
        // return b;
    }
};
