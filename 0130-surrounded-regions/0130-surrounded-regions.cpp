class Solution {
public:
    void bfs(int row,int col,vector<vector<char>>& board){
         int n=board.size();
        int m=board[0].size();
        queue<pair<int,int>>q;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        q.push({row,col});
         board[row][col]='#';
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && board[nrow][ncol]=='O'){
                     board[nrow][ncol]='#';
                    q.push({nrow,ncol});
                }
            }
        }

    } 
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(board[i][j]=='O'){
                        bfs(i,j,board);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
                else{
                    board[i][j]='X';
                }
            }
        }
    }
};