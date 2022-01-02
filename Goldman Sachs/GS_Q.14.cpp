// TC O(N*N) SC O(1)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int mini = INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                mini = min(mini,(i-j+1));
                sum-=nums[j];
                j++;
            }
        }
        if(mini == INT_MAX)
            return 0;
        return mini;
    }
};