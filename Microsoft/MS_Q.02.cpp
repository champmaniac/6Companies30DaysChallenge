// TC O(N+P) SC O(N+P)
class Solution {
public:
    bool isCycle(int ind, vector<bool> &vis, vector<bool> &recStack,vector<int> adj[]){
        if(vis[ind]==false){
            vis[ind]=true;
            recStack[ind]=true;
            for(auto it:adj[ind]){
                if(!vis[it] && isCycle(it,vis,recStack,adj))
                    return true;
                else{
                    if(recStack[it])
                        return true;
                }
            }
        }
        
        recStack[ind]= false;
        return false;
        
    } 
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    vector<int> adj[N];
	    for(int i=0;i<pre.size();i++){
	        int u = pre[i].first, v= pre[i].second;
	        adj[u].push_back(v);
	    }
	    vector<bool> vis(N,false);
	    vector<bool> recStack(N,false);
	    for(int i=0;i<N;i++){
	        if(vis[i]==false){
	            if(isCycle(i,vis,recStack,adj))
	                return false;
	        }
	    }
	    
	    return true;
	}
};