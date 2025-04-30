class Solution {
public:
    int findNumbers(vector<int>& nums) {
        string x = "";
        int cnt = 0;
        for(auto it:nums){
            x = to_string(it);
            if(x.size()%2==0)cnt++;
        }
        return cnt;
    }
};