class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int> mp;

        for (auto it : word) {
            mp[it]++;
        }

        vector<int> v;
        for (auto it : mp) {
            v.push_back(it.second);
        }

        sort(v.begin(), v.end());

        int ans = INT_MAX;
        int n = v.size();

        for (int target = 1; target <= v.back(); ++target) {
            int cnt = 0;
            for (int f : v) {
                if (f < target) {
                    cnt += f; 
                } else if (f > target + k) {
                    cnt += f - (target + k);  )
                }
               
            }
            ans = min(ans, cnt);
        }

        return ans;
    }
};
