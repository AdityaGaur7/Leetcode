class Solution {
private:
    void dfs(int i, vector<vector<int>>& adj, vector<int>& vis) {
        vis[i] = 1;
        for (auto it : adj[i]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& mat) {
        int n = mat.size(); // Use mat.size() instead of mat[0].size() to avoid potential issues
        vector<vector<int>> adj(n); // Fix: Use vector<vector<int>> instead of VLAs
        vector<int> vis(n, 0); // Fix: Use vector<int> for visited array

        // Construct adjacency list
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adj, vis);
            }
        }
        return cnt;
    }
};
