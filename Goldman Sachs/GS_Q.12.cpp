// TC O(1)
class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // base case
        if(n==1)
            return 1;
        return (n * (n + 1) / 2) * (2*n + 1) / 3;
    }
};