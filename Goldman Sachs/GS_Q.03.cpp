// Two Pointer Approach
// TC O(N) SC O(1)
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int prod =1,j=0,ans=0;
        for(int i=0;i<n;i++){
            prod*=a[i];
            while(j<n && prod>=k){
                prod/=a[j++];
            }
            ans+=(i-j+1);
        }
        return ans;
    }
};