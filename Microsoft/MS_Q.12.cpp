//TC O(N^3) SC O(N^2)
class Solution{
    public:
    // nums[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        vector<vector<int>> res;
        int n = nums.size();
        if(nums.empty())
        {
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target_3 = target - nums[i];
            for(int j=i+1;j<n;j++){
                int target_2 = target_3 - nums[j];
                int l =j+1;
                int r =n-1;
                while(l<r){
                    int two_sum=nums[l]+nums[r];
                    if(two_sum<target_2) l++;
                    else if(two_sum>target_2) r--;
                    else
                    {
                        vector<int> quadruplets(4,0);
                        quadruplets[0]=nums[i];
                        quadruplets[1]=nums[j];
                        quadruplets[2]=nums[l];
                        quadruplets[3]=nums[r];
                        res.push_back(quadruplets);
                        
                        while(l<r && nums[l]==quadruplets[2]) ++l;
                        while(l<r && nums[r]==quadruplets[3]) --r;
                        
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return res;
    }
};
