// TC O(N)
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return 0;
        int res=0;
        vector<int> up(n,0), down(n,0);
        for(int i=n-2;i>=0;--i) // backward pass
            if(arr[i]>arr[i+1])
                down[i]=down[i+1]+1;
        for(int i=0;i<n;i++){ // forward pass
            if(i>0 && arr[i]>arr[i-1])
                up[i]=up[i-1]+1;
            if(up[i]&&down[i])
                res=max(res,up[i]+down[i]+1);
        }
        return res;
    }
};