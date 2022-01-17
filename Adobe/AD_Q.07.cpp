// TC O(N) SC O(N)
class Solution {
public:
    int helper(vector<int> &v,int start,int end,vector<vector<int>> &dp){
        if(start>end){
            return dp[start][end]=0;
        }
        if(start==end){
            return dp[start][end]=v[start];
        }
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        
        int first = v[start]+min(helper(v,start+1,end-1,dp),helper(v,start+2,end,dp));
        int second = v[end]+min(helper(v,start+1,end-1,dp),helper(v,start,end-2,dp));
        
        return dp[start][end]=max(first,second);
    }
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
	    return helper(A,0,n-1,dp);
    }
};