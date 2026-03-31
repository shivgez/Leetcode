class Solution {
public:
    void bfs(int row,int col,  vector<vector<int>>&vis,   vector<vector<int>>&grid,vector<int>& ans){
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        while(!q.empty()){
            cnt++;
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        ans.push_back(cnt);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> ans;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(!vis[row][col] && grid[row][col]==1){
                    bfs(row,col,vis,grid,ans);
                }
            }
        }
        if (ans.empty()) return 0;
         return *max_element(ans.begin(), ans.end());
    }
};