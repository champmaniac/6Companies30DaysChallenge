class Solution{
    vector<vector<long long >> dp;
    public:
    long long helper(int n, int x, int curr){
        if(n==0) return 1;
        else if(curr==0) return 0;
        long long &ans = dp[n][curr];
        if(ans!=-1) return ans;
        long long power=pow(curr,x);
        return ans = (n-power>=0?helper(n-power,x,curr-1):0)+helper(n,x,curr-1);
    }
    long long  numOfWays(long long n, int x)
    {
        // code here
        int num=pow(n,1.0/x);
        dp.resize(n+1,vector<long long>(num+1,-1));
        return helper(n,x,num);
    }
};