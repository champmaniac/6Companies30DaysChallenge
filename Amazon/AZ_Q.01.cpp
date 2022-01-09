// TC O(N*K) SC O(N*K)
class Solution {
  public:
    static int maxProfit(int k, int n, int A[]) {
        // code here
        if(n==0) return 0;
        int dp[k+1][n];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=k;i++){
            int maxi = INT_MIN;
            for(int j=1;j<n;j++){
                maxi = max(maxi,dp[i-1][j-1]-A[j-1]);
                dp[i][j]=max(dp[i][j-1],maxi+A[j]);
            }
        }
        return dp[k][n-1];
    }
};