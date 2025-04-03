#include <vector>  
#include <algorithm>  
#include <limits.h>  

class Solution {  
public:  
    long long maximumTripletValue(vector<int>& nums) {  
        int n = nums.size();

        vector<long long>v(n,-1);
        long long maxi = nums[n-1];
        for(int i=n-2;i>=0;i--){
          if(v[i]<maxi){
            v[i]=maxi;
           
          }
             maxi = max(static_cast<long long>(nums[i]),maxi);
          
        }

          long long maxval = 0,maxtrip = 0;
        for(int i=0;i<n-1;i++){
            if(maxval<nums[i]){
                maxval=max(maxval,static_cast<long long>(nums[i]));
            }
            long long x = (maxval-nums[i])*v[i];
            maxtrip=max(maxtrip,x);
        }
        for(auto it:v){
            cout<<it<<" ";
        }
     
        
        return maxtrip;
   
    }  
};  