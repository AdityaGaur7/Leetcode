class Solution {
public:
    int minTimeToReach(vector<vector<int>>& m) {
         int n = m.size(), p = m[0].size();
        vector<vector<int>> t(n, vector<int>(p, INT_MAX));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
        
        q.push({0, 0, 0});
        t[0][0] = 0;

        while (!q.empty()) {
            auto [c, x, y] = q.top();
            q.pop();

            if (x == n - 1 && y == p - 1) {
                return c;
            }

            vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
            for (auto [dx, dy] : d) {
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && nx < n && ny >= 0 && ny < p) {
                    int w = max(c, m[nx][ny]);
                    int nt = w + 1;
                    if (nt < t[nx][ny]) {
                        t[nx][ny] = nt;
                        q.push({nt, nx, ny});
                    }
                }
            }
        }
        
        return -1; 
    }
};