
#define double long double
#define lg long long
#define vec(v) vector<int> v
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define l(n) for (int i = 0; i < n; i++)
#define p(v) for (auto it : v) cout << it << " ";
#define f(v) for(auto it:v)
#define cin(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define tc int t; cin >> t; while (t--)
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " " << x << endl;
#define PI 3.14159265358979323846
#define endl '\n'
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        lg totalSum = accumulate(nums.begin(), nums.end(), 0ll);
        lg rem = totalSum % p;
        
        if (rem == 0) return 0; 
        
        unordered_map<lg, lg> prefixModMap;  
        prefixModMap[0] = -1; 
        lg prefixSum = 0;
        lg minLength = nums.size();
        
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum = (prefixSum + nums[i]) % p;
            
           
            lg targetMod = (prefixSum - rem + p) % p;
            
          
            if (prefixModMap.find(targetMod) != prefixModMap.end()) {
                minLength = min(minLength, i - prefixModMap[targetMod]);
            }
            
           
            prefixModMap[prefixSum] = i;
        }
        
        return (minLength == nums.size()) ? -1 : minLength;
    }
};