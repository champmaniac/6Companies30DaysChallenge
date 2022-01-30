class Solution {
public:
    static bool comp(string&a,string&b){
        if(a.size()==b.size()) return a<b;
        return a.size()<b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),comp);
        return nums[n-k];
    }
};