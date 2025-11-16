class NumArray {
public:
 vector<int>sum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        sum.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int x = sum.back()+nums[i];
            sum.push_back(x);
        }
        for(auto it:sum)cout<<it<<" ";
        
    }
    
    int sumRange(int left, int right) {
        cout<<sum[right]<<"=="<<sum[left];
         int ans=0;
        if(left-1>0)
       ans = sum[right]-sum[left-1];
        else ans = sum[right]-0;
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */