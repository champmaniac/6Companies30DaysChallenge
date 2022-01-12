// TC O(D) SC O(1)
class Solution{
public:
    int minSteps(int D){
        int target = abs(D), step=0,sum=0;
        while(sum<target || (sum-target)%2!=0){
            step++;
            sum+=step;
        }
        return step;
        
        
        // int steps=0,sum=0;
        // while(sum<D){
        //     sum+=steps;
        //     steps++;
        // }
        // while((sum-D)%2){
        //     sum+=steps;
        //     steps++;
        // }
        // return steps-1;
    }
};