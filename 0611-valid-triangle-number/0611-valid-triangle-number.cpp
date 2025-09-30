class Solution {
public:
    int triangleNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n-2;i++){
            int a = nums[i];
            for(int j =i+1;j<n-1;j++){
                int b = nums[j];
                 int s = j+1;
                 int e = n-1;
                 int k = j;
                 while(s<=e){
                    int mid = s+(e-s)/2;
                     if(a+b > nums[mid]){
                        k=mid;
                        s=mid+1;
                     }
                     else{
                        e=mid-1;
                     }
                 }
               
                 ans+=(k-j);
            }
        }
        
        return ans;
    }
};
