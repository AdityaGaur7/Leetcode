class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
      unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto it:arr){
            string s = it;
            string r = s;
            sort(r.begin(),r.end());
            mp[r].push_back(s);
        }
     
        for(auto it:mp){
            ans.push_back(it.second);
        }
        // sort(ans.begin(),ans.end());
        return ans;  
    }
};