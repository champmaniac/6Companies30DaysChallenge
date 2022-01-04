// TC O(N*MlogM) SC O(N)

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<s.size();i++){
            auto it = s[i];
            sort(it.begin(),it.end());
            mp[it].push_back(i);
        }
        for(auto a:mp){
            vector<string> v;
            for(auto b:a.second){
                v.push_back(s[b]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};