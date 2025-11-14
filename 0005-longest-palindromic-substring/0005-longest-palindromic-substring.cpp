class Solution {
public:
int dp[1001][1001];
bool pal(string &s,int i , int j){
   if(i>=j)return 1;
   if(dp[i][j]!=-1)return dp[i][j];
   if(s[i]==s[j])return dp[i][j]=pal(s,i+1,j-1);

   return dp[i][j]=0;
}
    string longestPalindrome(string s) {
        int n = s.size();
        
        int maxlen= 0;
        int sp = 0;
        memset(dp,-1,sizeof(dp));
       
        for(int i=0;i<n;i++){
          for(int j = i;j<n;j++){
           if(pal(s,i,j)==1 ){
     if(maxlen < j-i+1){

          maxlen = j-i+1;
          sp = i;
     }
           }
          }
        }
        return s.substr(sp,maxlen);
    }
};