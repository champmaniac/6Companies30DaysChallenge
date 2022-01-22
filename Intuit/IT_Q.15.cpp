class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=1000000000;
        while(l<r){
            int mid = (l+r)/2, total =0;
            for(auto p:piles){
                total+=(p+mid-1)/mid;
            }
            if(total>h){
                l=mid+1;
            }
            else
                r=mid;
        }
        return l;
    }
}