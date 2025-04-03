class Solution {
    private:
    void dfs(int i, int j,vector<vector<char>>& board,vector<vector<int>>& vis){
           vis[i][j]=1;
            int n = board.size();
        int m = board[0].size();

           int delrow[] = {-1,0,1,0};
           int delcol[] = {0,1,0,-1};
           for(int k=0;k<4;k++){
            int nrow = delrow[k]+i;
            int ncol = delcol[k]+j;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol]=='O' && vis[nrow][ncol]==0){
                vis[nrow][ncol]=1;
                dfs(nrow,ncol,board,vis);
            }
           }

    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(board[0][i]=='O' && vis[0][i]==0){
                cout<<"1st\n";
                dfs(0,i,board,vis);
            }

        }
         for(int i=1;i<n;i++){
             if(board[i][0]=='O'&& vis[i][0]==0){
                cout<<"2st\n";
                dfs(i,0,board,vis);
            }
        }
         for(int i=1;i<m;i++){
             if(board[n-1][i]=='O'&& vis[n-1][i]==0){
                cout<<"3st\n";
                dfs(n-1,i,board,vis);
            }
        }
         for(int i=1;i<n-1;i++){
             if(board[i][m-1]=='O'&& vis[i][m-1]==0){
                cout<<"4st\n";
                dfs(i,m-1,board,vis);
            }
        }

 for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(vis[i][j]==0 && board[i][j]=='O')board[i][j]='X';
                                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }
     

        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};