class Solution {
public:
    string largestGoodInteger(string num) {
      vector<string>v = {"999","888","777","666","555","444","333","222","111","000"};
      for(auto it:v){
        auto x = num.find(it);
        if(x!=string::npos)return it;
      }
        return "";
    }
};