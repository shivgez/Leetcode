class Solution {
public:
    bool check(int node,vector<int>& pathvisit,vector<int>&visit,vector<vector<int>>&adj){
        visit[node]=1;
        pathvisit[node]=1;
        for(auto& it: adj[node]){
            if(!visit[it]){
                if(check(it,pathvisit,visit,adj)==true){
                    return true;
                }
            }
            else if(pathvisit[it]){
                return true;
            }
        }
        pathvisit[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(numCourses);
    for(auto it:prerequisites){
        adj[it[1]].push_back(it[0]);
    }    
    vector<int> visit(numCourses,0);
    vector<int> pathvisit(numCourses,0);
    for(int i=0;i<numCourses;i++){
        if(!visit[i]){
            if(check(i,pathvisit,visit,adj)==true){
                return false;
            }
        }
    }
    return true;
    }
};