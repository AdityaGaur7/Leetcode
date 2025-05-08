

class Solution {
public:
    int minTimeToReach(vector<vector<int>>& m) {
        int r = m.size(), c = m[0].size();
        vector<vector<vector<int>>> t(r, vector<vector<int>>(c, vector<int>(2, numeric_limits<int>::max())));
        t[0][0][0] = 0;
        priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> pq;
        pq.push({0, 0, 0, 0});
        vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        while (!pq.empty()) {
            auto [ct, x, y, p] = pq.top();
            pq.pop();
            if (ct > t[x][y][p]) {
                continue;
            }
            for (const auto& [dx, dy] : d) {
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                    int nt = max(ct, m[nx][ny]) + (p ? 2 : 1);
                    if (nt < t[nx][ny][1 - p]) {
                        t[nx][ny][1 - p] = nt;
                        pq.push({nt, nx, ny, 1 - p});
                    }
                }
            }
        }
        return min(t[r - 1][c - 1][0], t[r - 1][c - 1][1]);
    }
};
