class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        unordered_map<int,vector<int>>mp;
        vector<int>indegree(n,0);
        vector<int>ans;
        for(auto e:p){
            mp[e[1]].push_back(e[0]);
            indegree[e[0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(auto it:mp[x]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        if(n==ans.size())return ans;
        else return {};
    }
};