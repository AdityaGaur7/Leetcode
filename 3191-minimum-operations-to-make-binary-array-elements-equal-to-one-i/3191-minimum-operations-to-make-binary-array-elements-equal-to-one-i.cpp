class Solution {
    private:
    int toggle(int i){
        if(i==1)return 0;
        else return 1;
    }
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int cnt=0;
        while(i<n-2){
            if(nums[i]==0){
                cnt++;
                nums[i]=toggle(nums[i]);
                nums[i+1]=toggle(nums[i+1]);
                nums[i+2]=toggle(nums[i+2]);
                
            }
            i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0)return -1;
        }
        return cnt;
    }
};