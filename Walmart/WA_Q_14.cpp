class Solution
{
    public:
    //Function to find the largest number after k swaps.
    
    void helper(string &str, string &max, int k, int ind){
        if(k==0) return;
        char maxi = str[ind];
        for(int i=ind+1;i<str.size();i++){
            if(maxi<str[i])
                maxi = str[i];
        }
        if(maxi!=str[ind])
            k--;
        for(int i=str.size()-1;i>=ind;i--){
            if(str[i]==maxi)
            {
                swap(str[i],str[ind]);
                if(str.compare(max)>0){
                    max=str;
                }
                helper(str,max,k,ind+1);
                swap(str[i],str[ind]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string max=str;
       helper(str,max,k,0);
       return max;
    }
};