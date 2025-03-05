class Solution {
public:
    long long coloredCells(int n) {
       
       long long x= (long long)n * (n-1);
       x = x/2;

        return 1+4*x;
    }
};