class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       map<int,int>mp;
       int n = grid.size();
       int m=grid[0].size();

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mp[grid[i][j]]++;

        }
       }
       vector<int>v;
       for(int i=0;i<n*n;i++){
        v.push_back(i+1);
       } 
       int ans1 =0;
       for(auto it :mp){
        cout<<it.first<<"-->"<<it.second<<endl;
        if(it.second == 2){
          ans1 = it.first;
          break;
        }
        

       }
        int ans2=0;
        for(auto it:v){
            if(mp.find(it)==mp.end()){
                ans2 = it;
                   break;
            }
        }
        return {ans1,ans2};

    }
};