class Solution {
public:
void dfs(unordered_map<int,vector<int>>&mp,vector<bool>&vis,int i){
   vis[i]=true;
    
    for(auto it:mp[i]){
        if(vis[it]==false)
         dfs(mp,vis,it);
    }
   
    return ;
}
    int findCircleNum(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
int cnt=0;
unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1 && i!=j){
                    mp[i].push_back(j);
                }
            }
        }
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
                if(vis[i]==false){
                    cnt++;
                   dfs(mp,vis,i);
                }   
        }
        
        return cnt;
    }
};