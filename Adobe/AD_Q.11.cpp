// TC O(N) SC O(N)
class Solution{
    public:
    string amendSentence (string s)    
    {
        string ans ="",k;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
                if(i!=0)ans+="";
            }
            ans+=s[i];
        }
        return ans;
        
        // Two Pointer Approach
        
        // string ans;
        // int n = s.size(),start=0,end=1;
        // while(end<=n){
        //     if((isupper(s[end]))|| end==n){
        //         string st = s.substr(start,end-start);
        //         st[0]=tolower(st[0]);
        //         ans+=st;
        //         ans.push_back(' ');
        //         start = end;
        //     }
        //     end++;
        // }
        // ans.pop_back();
        // return ans;
    }
};