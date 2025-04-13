#define mod 1000000007;
class Solution {
public:
 long long po(long long x , long long n){
     if(n==0)return 1;

 
 long long ans = po(x,n/2);
 ans *=ans;
 ans%=mod;
 if(n%2==1){
     ans*=x;
     ans%=mod;
 }
 return ans;
 }
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        return (po(5,even)*po(4,odd))%mod;
        // 0 1 2 3 4 5 6 7 8 9 
        //even 0 2 4 6 8  
        // prime 2 3 5 7 
    }
};