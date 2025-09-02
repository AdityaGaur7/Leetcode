class Solution {
public:
vector<long> primeFactors(int n) {
    vector<long> factors;

    // Store the number of 2s that divide n
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can 
     // skip one element (i = i + 2)
    for (long i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        factors.push_back(n);

    return factors;
}
    bool isUgly(int n) {
        if(n==1)return 1;
        if(n<=0)return 0;

        vector<long>v = primeFactors(n);
        for(auto it:v){
            if(it!=2 && it!=3 && it!=5)return 0;
        }
        return 1;

        
    }
};