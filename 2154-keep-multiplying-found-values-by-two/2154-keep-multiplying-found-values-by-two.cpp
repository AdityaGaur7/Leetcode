class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        int num = o;
     
     while(1){
           auto x = find(nums.begin(),nums.end(),num);
           if(x !=nums.end()){
            num = 2*num;
           }else break;
     }
return num;
    }
};