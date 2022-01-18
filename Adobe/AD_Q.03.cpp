// TC O(N*K) SC O(N*K)
class Solution
{
  public:
    long long dp[1001][1001], mod = 1000000007;
    long long solve(int n,int cnt,int k){
        if(n==0) return 1;
        if(dp[n][cnt]!=-1) return dp[n][cnt]%mod;
        
        if(cnt==k)
            return dp[n][cnt]=((21%mod)*(solve(n-1,0,k))%mod)%mod;
            
        return dp[n][cnt]=(((21%mod)*(solve(n-1,0,k))%mod)%mod+(5*(solve(n-1,cnt+1,k))%mod)%mod)%mod;
    }
    int kvowelwords(int N, int K) {
        // Write Your Code here
        for(int i=0;i<=N;i++){
            for(int j=0;j<=K;j++){
                dp[i][j]=-1;
            }
        }    
        return solve(N,0,K)%mod;
    }
};