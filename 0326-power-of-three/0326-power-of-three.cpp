class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)return 1;
        if(n%3!=0 || n<1)return false;
          int x=n;
        while(x%3==0){
            x = x/3;
            
        }
        cout<<x;
        
        return (x==1)? 1:0;
    }
};