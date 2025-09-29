class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int length = 3; length <= n; ++length) {
            for (int i = 0; i <= n - length; ++i) {
                int j = i + length - 1;

                dp[i][j] = numeric_limits<int>::max();

                for (int k = i + 1; k < j; ++k) {
                    int current_triangulation_score =
                        dp[i][k] + dp[k][j] +
                        (values[i] * values[k] * values[j]);

                    dp[i][j] = min(dp[i][j], current_triangulation_score);
                }
            }
        }

        return dp[0][n - 1];
    }
};