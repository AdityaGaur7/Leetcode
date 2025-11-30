class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>v;
        map<int,int>mp;
        for(auto it:matches){
            v.push_back(it[0]);
            mp[it[1]]++;
        }
        vector<int>ans,res;
        for(auto it:v){
            if(mp.find(it)==mp.end() && find(ans.begin(),ans.end(),it)==ans.end())ans.push_back(it);
        }
        for(auto it:mp){
           if(it.second==1)res.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        sort(res.begin(),res.end());
        return {ans,res};
    }
};