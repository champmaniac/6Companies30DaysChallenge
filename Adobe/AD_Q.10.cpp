// TC O(N) SC O(N)
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mp;
        int maxi =0; string s;
        vector<string> v;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
                s=it.first;
            }
        }
        v.push_back(s);
        v.push_back(to_string(maxi));
        return v;
    }
};