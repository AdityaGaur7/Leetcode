class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    set<int> v(nums.begin(), nums.end());
        int op = 0;

        while (!v.empty()) {
            auto it = v.rbegin(); 
            int maxVal = *it;

           
            if (maxVal < k) return -1;

           
            if (maxVal == k) {
                v.erase(maxVal); 
                continue;
            }

           
            auto nextIt = ++v.rbegin();
            int nextVal = (nextIt != v.rend()) ? *nextIt : k;

           
            op++;
            v.erase(maxVal);
            v.insert(nextVal);
        }

        return op;
    }
};