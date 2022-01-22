class Solution {
    const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,1,-1};
public:
    bool dfs(vector<vector<char>> &board,string &word,int ind,int x,int y,int n,int m,vector<vector<bool>> &vis){
        if(ind==word.size()) return true;
        if(x<0 || x>=n || y<0 || y>=m || vis[x][y] || board[x][y]!=word[ind]) return false;
        
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            if(dfs(board,word,ind+1,x+dx[i],y+dy[i],n,m,vis)) return true;
        }
        vis[x][y]=false;
        return false;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(board[i][j]==word[0] && dfs(board,word,0,i,j,n,m,vis))
                    return true;
            }
        }
        return false;
    }
};