class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3];
        for(auto it:nums){
            arr[it]++;
        }
        int x =0;
        for(int j=0;j<3;j++)
        for(int i=0;i<arr[j];i++){
        nums[x]=j;
        x++;
        }
    }
};