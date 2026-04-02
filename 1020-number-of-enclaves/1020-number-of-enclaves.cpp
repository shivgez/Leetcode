class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> q;
        grid[row][col]=0;
        q.push({row,col});
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]==1){
                    grid[nrow][ncol]=0;
                    q.push({nrow,ncol});
                }
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 ||j==n-1){
                    if(grid[i][j]==1){
                       bfs(i,j,grid);
                    }
                }
                }
            }
        
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) cnt++;
                
                }
                }

        return cnt;
    }
};