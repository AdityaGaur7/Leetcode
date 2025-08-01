class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();

        if (t.size() > n)
            return "";
        unordered_map<char, int> mp;

        // store in map
        for (auto it : t) {
            mp[it]++;
        }

        int requiredCount = t.size();
        int i = 0, j = 0;
        int minWindowSize = INT_MAX;
        int start_i = 0;

        // traverse start
        while (j < n) {
            char ch = s[j];
            if (mp[ch] > 0) {
                requiredCount--;
            }
            mp[ch]--;

            while (requiredCount == 0) {
                // start shirnking window

                int currWindow = j - i + 1;
                if (minWindowSize > currWindow) {
                    minWindowSize = currWindow;
                    start_i=i;
                }
                mp[s[i]]++;
                if (mp[s[i]] > 0)
                    requiredCount++;
            i++;
            }
        j++;
        }
        return minWindowSize==INT_MAX ? "" :s.substr(start_i,minWindowSize);
    }
};