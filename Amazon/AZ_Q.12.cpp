// TC O(logN) SC O(1)
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string temp="";
        while(n>0){
            char ch = 'A'+(n-1)%26;
            temp=ch+temp;
            n=(n-1)/26;
        }
        return temp;
    }
};