// TC O(N) SC O(N)
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[((nums[i]%k)+k)%k]++;
        }
        if(mp[0]%2!=0) return false;
        for(int i=1;i<k;i++){
            if(mp[i]!=mp[k-i])
                return false;
        }
        return true;
    }
};