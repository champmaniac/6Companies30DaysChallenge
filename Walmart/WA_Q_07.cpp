class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        int large[N+1]={0}, small[N+1]={0};
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0;i<N-1;i++){
            mini = min(mini,arr[i]);
            small[i+1]=mini;
        }
        for(int i=N-1;i>0;i--){
            maxi =max(maxi,arr[i]);
            large[i-1]=maxi;
        }
        for(int i=1;i<N-1;i++){
            if(arr[i]>small[i] && arr[i]<large[i])
                return {small[i],arr[i],large[i]};
        }
        return {};
    }
};