// TC O(NlogN) SC O(NlogN)
class Solution {
  public:
    int solve(vector<int> vec){
        vector<int> res;
        int n = vec.size();
        for(int i=0;i<n;i++){
            auto it = lower_bound(res.begin(),res.end(),vec[i]);
            if(it==res.end()){
                res.push_back(vec[i]);
            }
            else
            {
                *it=vec[i];
            }
        }
        return res.size();
    }
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0;i<M;i++){
            mp[B[i]]++;
        }
        vector<int> vec;
        for(int i=0;i<N;i++){
            if(mp.find(A[i])!=mp.end()){
                vec.push_back(A[i]);
            }
        }
        return (N+M)-2*solve(vec);
    }
};