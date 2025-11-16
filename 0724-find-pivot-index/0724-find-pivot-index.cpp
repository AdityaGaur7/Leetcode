class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size();
        int sum=0;
         int l =0, r= 0;
         for(auto it:nums)sum+=it;
         for(int i=0;i<n;i++){
             r=sum-l-nums[i];
           
            if(l==r)return i;
            l+=nums[i];
             
         }
         
         return -1;
    }
};