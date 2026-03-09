class Solution {
public:
    void bfs(int start,vector<vector<int>>& isConnected,vector<int>& vis,int & pro){
        queue<int> q;
        q.push(start);
        vis[start]=1;

        while(!q.empty()){
            int node=q.front();
            q.pop();
           for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1 && !vis[i]){
                vis[i]=1;
                q.push(i);
            }
           }
        }
    pro++;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int> vis(v,0);
        int pro=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                bfs(i,isConnected,vis,pro);
            }
        }
        return pro;
    }
};