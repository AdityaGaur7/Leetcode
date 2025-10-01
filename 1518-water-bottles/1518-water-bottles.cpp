class Solution {
public:
    int numWaterBottles(int b, int n) {
        int cnt = b;
        int x=0,y=0;
        while(b>=n){
           x = b/n;
           
           y = b%n;
          cnt +=x;
          b = x+y;
        }
        return cnt;
    }
};