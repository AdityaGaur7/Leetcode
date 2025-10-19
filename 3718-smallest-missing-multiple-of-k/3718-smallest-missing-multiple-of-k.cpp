class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt =1;
        int find=k;
       while(1){
        find=k*cnt;
        auto it=binary_search(nums.begin(),nums.end(),find);
        cnt++;
        if(!it)return find;
       }
       return -1;
    }
};