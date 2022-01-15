// TC O(N * |S| + K) , where |S| denotes maximum length. SC O(K)
class Solution{
    public:
    string findOrder(string dict[], int n, int k) {
        //code here
        vector<int> ans[k];
        for(int i=0;i<n-1;i++){
            int minlen = min(dict[i].size(),dict[i+1].size());
            for(int j=0;j<minlen;j++){
                if(dict[i][j]!=dict[i+1][j]){
                    ans[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                    break;
                }
            }
        }
        
        vector<int> indegree(k,0);
        for(int i=0;i<k;i++){
            for(auto x:ans[i]) indegree[x]++;
        }
        
        queue<int> q;
        for(int i=0;i<k;i++){
            if(indegree[i]==0) q.push(i);
        }
        
        string res="";
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res+=(node+'a');
            for(auto x:ans[node]){
                indegree[x]--;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        
        if(res.size()==k) return res;
        return "";
    }
};