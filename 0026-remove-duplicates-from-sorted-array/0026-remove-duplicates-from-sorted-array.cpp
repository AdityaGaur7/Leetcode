class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>mp;
        for(auto it:nums){
            mp.insert(it);
        }
        int i=0;
    for(auto it:mp){
  nums[i]=it;
  i++;
    }
        return mp.size();
    }
};