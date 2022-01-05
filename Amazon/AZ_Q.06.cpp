// TC O(N) SC O(K)
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        // your code here
        vector<int> ans;
        deque<int> q;
        for(int i=0;i<n;i++){
            while(!q.empty() && i-q.front()>=k){
                q.pop_front();
            }
            while(!q.empty() && nums[q.back()]<nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            if(i>=k-1)
                ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};