class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
         int old = image[sr][sc];
        if(old==color) return image;
         queue<pair<int,int>>p;
         p.push({sr,sc});
         image[sr][sc]=color;
         int drow[]={-1,0,1,0};
         int dcol[]={0,1,0,-1};
         while(!p.empty()){
            int row=p.front().first;
            int col=p.front().second;
            p.pop();

            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==old){
                    image[nrow][ncol]=color;
                    p.push({nrow,ncol});
                }
            }
         }
         return image;
    }
};