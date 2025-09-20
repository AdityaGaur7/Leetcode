class Solution {
public:
    bool check(vector<int>& count) {
        for (auto it : count) {
            if (it != 0)
                return 0;
        }
        return 1;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        vector<int> v;

        int m = p.size();
        int l = 0, r = 0;
        vector<int> count(26, 0);
        for (int i = 0; i < m; i++) {
            char ch = p[i];
            count[ch - 'a']++;
        }

        while (r < n) {
            count[s[r] - 'a']--;

            if (r - l + 1 == m) {
                if (check(count)) {

                    v.push_back(l);
                }
                count[s[l] - 'a']++;
                l++;
            }
            r++;
        }
        return v;
    }
};