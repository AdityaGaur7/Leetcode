class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        int x = -1;
        for(auto it:mp){
            if(it.first==it.second){
                x = max(x,it.first);
            }

        }
        return x;
    }
};