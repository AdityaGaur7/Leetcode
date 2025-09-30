class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int x = n;
        while(x--){

        for(int i=0;i<x;i++){
            nums[i]=nums[i]+nums[i+1];
            nums[i]=nums[i]%10;
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        }
        for(auto it:nums){
            cout<<it<<" ";
        }
        return nums[0];
    }
};