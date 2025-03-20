class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        s=s+'!';
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(s[i]!=t[i])return t[i];
        }
        return 'l';
    }
};