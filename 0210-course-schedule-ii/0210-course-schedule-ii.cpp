class Solution {
public:
    bool dfs(int node,vector<int>& vis, vector<vector<int>>& adj,vector<int>& ans){
        vis[node]=1;
       
        for(auto it: adj[node]){
            if(vis[it]==0){
           if( dfs(it,vis,adj,ans)) return true;
        }
        else if (vis[it]==1) return true;
        }
        vis[node]=2;
         ans.push_back(node);
         return false;
            }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto it:prerequisites ){
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(numCourses,0);
        vector<int> ans;
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                   if(dfs(i,vis,adj,ans)==true) return {};
            }
        }
        reverse(ans.begin(),ans.end());
     return ans;
    }
};