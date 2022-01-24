class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        
        vector<int>  adj[n+1];
        vector<int> ans; 
         vector<int> vis(n+1,0) ;
        
        
        for(auto i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }
        
        for(int i=0;i<n;i++){
            if(iscycle(i,vis,adj)){
                return ans;
            }
        }
        
        stack<int> s;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                topo_sort(i,visited,adj,s);
            }
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
    
    void topo_sort(int i, vector<int> &visited,vector<int> adj[],stack<int> &s){
        visited[i]=1;
        for(auto X: adj[i]){
            if(!visited[X]){
                topo_sort(X,visited,adj,s);
            }
        }
        s.push(i);
    }
    
    bool iscycle(int i, vector<int> &vis,vector<int> adj[] ) {
        if(vis[i]==1){
            return true;
        }
        if(vis[i]==0){
            
            vis[i]=1;
            for(auto x:adj[i]){
                if(iscycle(x,vis,adj)){
                    return true;
                }
            }
        }
        
        vis[i]=2;
        return false;
    }
};