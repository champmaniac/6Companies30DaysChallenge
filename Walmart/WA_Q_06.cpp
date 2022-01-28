class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       if(R==1) return N;
       long long ans=power(N,R/2)%mod;
       ans=(ans*ans)%mod;
       if(R%2==0) {
           return ans%mod;
       }
       return (ans*N)%mod;
    }

};