class Solution {
public:
bool isvowel(char c){
    c = tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;

    return 0;
}
    string reverseVowels(string s) {
        vector<char>v;
        vector<int>idx;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                v.push_back(s[i]);
                idx.push_back(i);
            }

        }
        reverse(v.begin(),v.end());
       for(int i=0;i<v.size();i++){
        s[idx[i]]=v[i];
       }
       return s;
    }
};