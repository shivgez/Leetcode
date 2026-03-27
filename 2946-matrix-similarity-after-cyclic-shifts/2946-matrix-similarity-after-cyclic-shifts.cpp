class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> adj=mat;
      k=k%n;
      for(int i=0;i<m;i++){
        if(i%2==0){
            rotate(adj[i].begin(),adj[i].begin()+k,adj[i].end());
        }
        else{
             rotate(adj[i].rbegin(),adj[i].rbegin()+k,adj[i].rend());
        }
      }
      if(adj==mat) return true;
      return false;
    }
};