class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int mx = 0;
        for(auto it:mp){
            mx=max(mx,it.second);

        }
        int cnt = 0;
        for(auto it:mp){
            if(mx==it.second)cnt++;
        }
        int num = cnt*mx;
        return num;

    }
};