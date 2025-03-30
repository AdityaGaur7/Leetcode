class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        int mini = cost[0];
        vector<int>v;
        for(int i=0;i<n;i++){
          if(cost[i]>mini){
            v.push_back(mini);

          }else{
            v.push_back(cost[i]);
            mini = min(mini,cost[i]);
          }


        }
        return v;
    }
};