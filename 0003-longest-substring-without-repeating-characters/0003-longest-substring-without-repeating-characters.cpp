class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l =0, r = 0;
        int maxi =0;
     unordered_map<char,int>mp;
     while(r<n){
        if(mp.find(s[r])!=mp.end())
         l =max(l, mp[s[r]] + 1);

        mp[s[r]]=r;
         int len = r-l+1;
         maxi = max(len,maxi);
        r++;
     }
        return maxi;
    }
};