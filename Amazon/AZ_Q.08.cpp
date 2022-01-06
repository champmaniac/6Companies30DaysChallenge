// TC O(N) SC O(N)
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        long ways =0;
        for(int i=0;i<=m;i++){
            ways++;
            m--;
        }
        return ways;
    }
};