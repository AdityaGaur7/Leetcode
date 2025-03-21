class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       auto p=[&](int i){
           return (i==0||nums[i-1]<nums[i]);
             
        };
        int l=-1,r=nums.size();
        while(r-l>1){
           int mid=l+(r-l)/2;
           p(mid)?(l=mid):(r=mid);
        }
        return l;
    }
};