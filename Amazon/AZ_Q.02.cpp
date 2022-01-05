// Dp : Two pass
// TC O(N) SC O(N)
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return 0;
        int res=0;
        vector<int> up(n,0), down(n,0);
        for(int i=n-2;i>=0;--i)
            if(arr[i]>arr[i+1])
                down[i]=down[i+1]+1;
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]>arr[i-1])
                up[i]=up[i-1]+1;
            if(up[i]&&down[i])
                res=max(res,up[i]+down[i]+1);
        }
        return res;
    }
};

// Dp : One pass
// TC O(N) SC O(1)
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        // if(n<3) return 0;
        int res=0,up=0,down=0;
        for(int i=1;i<n;i++){
            if(down && arr[i-1]<arr[i] || arr[i-1]==arr[i]) up=down=0;
            up+=arr[i-1]<arr[i];
            down+=arr[i-1]>arr[i];
            if(up && down)res=max(res,up+down+1);
        }
        return res;
    }
};