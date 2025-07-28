class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string> st;
        string x = "";
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == ' ') {
                if (!x.empty()) {
                    st.push(x);
                    x = "";
                }
            } else {
                x += s[i];
            }
        }
        
        // Push the last word if any
        if (!x.empty()) {
            st.push(x);
        }
        
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += ' ';
        }
        
        return ans;
    }
};
