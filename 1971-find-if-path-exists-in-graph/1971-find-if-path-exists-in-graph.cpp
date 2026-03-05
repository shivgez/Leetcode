class Solution {
public:
    bool BFS(int n, vector<vector<int>>& adj, int source,int destination){
    queue<int> q;
     vector<int> visit(n,0);
     visit[source]=1;
     q.push(source);
     
     while(!q.empty()){
        
        int node=q.front();
        q.pop();
       if(node==destination){ return true;}
        for(auto it: adj[node]){
            if(!visit[it]){
                visit[it]=1;
                q.push(it);
            }
        }
     }
    return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

for(auto e : edges){
    adj[e[0]].push_back(e[1]);
    adj[e[1]].push_back(e[0]);
}
     return BFS(n,adj,source,destination);
    
    }
};