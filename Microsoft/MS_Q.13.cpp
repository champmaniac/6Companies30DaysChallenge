// TC O(V+E) SC O(V)
class Solution
{
    public:
    //Function to find if the given edge is a bridge in graph.
    int vis[100001];
    int dfs(int ind, vector<int> adj[],int c,int d){
        vis[ind]=1;
        for(auto it:adj[ind]){
            if(ind ==c && it==d) continue;
            if(!vis[it])
                dfs(it,adj,c,d);
        }
        return 0;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        for(int i=0;i<V;i++){
            vis[i]=0;
        }
        dfs(c,adj,c,d);
        return (!vis[d]);
    }
};