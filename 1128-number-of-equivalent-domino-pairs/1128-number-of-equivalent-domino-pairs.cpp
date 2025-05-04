class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
         vector<int> num(100);
        int ret = 0;
        for (auto& it : d) {
            int val = it[0] < it[1] ? it[0] * 10 + it[1] : it[1] * 10 + it[0];
            ret += num[val];
            num[val]++;
        }
        return ret;
    }
};