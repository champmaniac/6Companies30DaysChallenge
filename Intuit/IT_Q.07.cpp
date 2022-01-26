class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int l = 0;
        for (auto& w: weights) l = max(l, w);
        int r = 25000000;
        while (l < r){
            int mid = (r-l)/2 + l;
            int sum = 0;
            int num = 1;
            for (auto& w: weights){
                if (sum + w <= mid) sum += w;
                else {
                    sum = w;
                    num ++;
                }
            }
            if (num > D) {
                l = mid + 1;
            }
            else r = mid;
        }
        return l;
    }
};