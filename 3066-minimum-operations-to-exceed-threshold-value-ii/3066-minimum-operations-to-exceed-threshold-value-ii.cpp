#define ll long long
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
            priority_queue<ll, vector<ll>, greater<ll>> v;
        for(auto it:nums){
            v.push(it);
        }
         ll ans = 0,cnt =0;
        while( !v.empty() && v.top()<k){
            ll x = v.top();
            v.pop();
            ll y = v.top();
            v.pop();
           ans = 2 * min(x,y)+ max(x,y);
           cout<<x<<","<<y<<"="<<ans<<endl;
       
           v.push(ans);
           cnt ++;
        }
        return cnt;
    }
};