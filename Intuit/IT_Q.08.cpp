class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int> mp;
            for(int j=0;j<n;j++){
                int dx = points[i][0]-points[j][0];
                int dy= points[i][1]-points[j][1];
                int dis = dx*dx+dy*dy;
                ans+=mp[dis]*2;
                mp[dis]++;
            }
        }
        return ans;
    }
};