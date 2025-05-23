class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum = 0;
        int cnt = 0;
        int pos = INT_MAX;
        int neg = INT_MIN;

        for (int it : nums) {
            int x = it ^ k;
            sum += it;
            int y = x - it;

            if (y > 0) {
                pos = min(pos, y);
                sum += y;
                cnt += 1;
            } else {
                neg = max(neg, y);
            }
        }

        if (cnt % 2 == 0) {
            return sum;
        }
        return max(sum - pos, sum + neg);
    }
};