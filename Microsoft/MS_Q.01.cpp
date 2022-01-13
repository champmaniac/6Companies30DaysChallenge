//TC O(N*|sum of array elements|) SC O(N*|sum of array elements|)
class Solution{

  public:
  
    int helper(int arr[], int n ,int sum, int total,vector<vector<int>> &dp){
        if(n==0)
            return abs((total-sum)-sum);
        // memoization 
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        dp[n][sum]= min(helper(arr,n-1,sum+arr[n-1],total,dp),helper(arr,n-1,sum,total,dp));
        return dp[n][sum];
    }
    int minDifference(int arr[], int n)  { 
        // Your code goes here
        int total = accumulate(arr,arr+n,0);
        vector<vector<int>> dp(n+1,vector<int>(total+1,-1));
        return helper(arr,n,0,total,dp);
    } 
};