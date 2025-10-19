class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=mat[j][i];
            }
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=ans[i][m-j-1];
            }
            cout<<endl;
        }


    }
};