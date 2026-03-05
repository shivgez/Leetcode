class Solution {
public:
    vector<int> BFS(int n, vector<vector<int>>& adj, int source){
    queue<int> q;
     vector<int> visit(n,0);
     visit[source]=1;
     q.push(source);
     vector<int> bfs;
     while(!q.empty()){
        
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!visit[it]){
                visit[it]=1;
                q.push(it);
            }
        }
     }
     return bfs;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

for(auto e : edges){
    adj[e[0]].push_back(e[1]);
    adj[e[1]].push_back(e[0]);
}
     vector<int> vec=BFS(n,adj,source);
     for(auto it: vec){
        if(it==destination) return true;
     }
        return false;
    }
};