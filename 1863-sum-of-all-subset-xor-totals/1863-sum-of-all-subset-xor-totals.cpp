class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
         int n = nums.size();
        int t = 0;
        for (int i = 0; i < (1 << n); i++) {
            int d = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    d ^= nums[j];
                }
            }
            t += d;
        }
        return t;
    }
};