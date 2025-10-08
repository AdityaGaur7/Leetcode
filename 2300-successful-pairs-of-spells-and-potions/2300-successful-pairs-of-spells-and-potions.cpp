class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int>a(n);
       sort(potions.begin(), potions.end());
for (int i = 0; i < n; ++i) {
    long long t =ceil((1.0*success)/ spells[i]);
    if(t>potions[m-1])continue;
    auto it = lower_bound(potions.begin(), potions.end(), (int)t);
    int x = it - potions.begin();

    a[i] = m - x;
}
        return a;


    }
};