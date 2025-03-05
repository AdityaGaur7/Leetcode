class Solution {
public:
    long long coloredCells(int n) {
       
       long long x= n * (n-1);
       x = x/2;

        return 1+4*x;
    }
};