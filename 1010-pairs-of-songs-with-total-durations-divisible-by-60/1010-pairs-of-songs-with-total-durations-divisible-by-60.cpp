class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       unordered_map<int, int> mp;
        int cnt = 0;
        for (int t : time) {
            int r = t % 60;
            int complement = (60 - r) % 60;
            if (mp.find(complement) != mp.end()) {
                cnt += mp[complement];
            }
            mp[r]++;
        }
        return cnt;
    }
};