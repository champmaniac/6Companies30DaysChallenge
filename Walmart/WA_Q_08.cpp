class Solution{
public:
    int height(int N){
        // code here
        int i=0;
        for(i;i<1000;i++){
            if(((i*(i+1))/2)>N) break;
        }
        return i-1;
    }
};