class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        int n = s.size();
        int i = 0;

        while (i < n) {
            string x = s.substr(i, k);
            if (x.size() < k) {
                x.append(k - x.size(), fill); 
            }
            v.push_back(x);
            i += k;
        }
        return v;
    }
};
