class Solution {
public:


    bool canFinish(int n, vector<vector<int>>& p) {
         unordered_map<int,vector<int>>mp;
        vector<int>indegree(n,0);
        for(auto e:p){
            mp[e[0]].push_back(e[1]);
            indegree[e[1]]++;
        }
      int cnt=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        
        while(!q.empty()){
            int x= q.front();
            q.pop();
            cnt++;
            for(auto it:mp[x]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        // cout<<ans.size();
        if(cnt==n)return 1;
        else return 0;

    }
};