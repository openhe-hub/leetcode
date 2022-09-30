#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int m, n;
    vector<int> vis;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
public:
    int dfs(int x, int y, int sum, vector<vector<int>> &grid) {
        if (x < 0 || x >= m || y < 0 || y >= n || vis[x * n + y] || !grid[x][y]) return 0;
        else {
            vis[x * n + y] = 1;
            int ret = 1;
            for (int i = 0; i < 4; ++i) {
                ret += dfs(x + dx[i], y + dy[i], sum + 1, grid);
            }
            return ret;
        }
    }

    int numEnclaves(vector<vector<int>> &grid) {
        m = grid.size();
        n = grid[0].size();
        vis.resize(m * n);
        int num = 0;
        for (int i = 0; i < m * n; ++i) {
            vis[i] = 0;
            num += grid[i / n][i % n] ? 1 : 0;
        }

        int ret = 0;
        for (int i = 0; i < n; ++i) {
            if (!vis[i] && grid[0][i]) ret += dfs(0, i, 0, grid);
            if (!vis[(m - 1) * n + i] && grid[m - 1][i]) ret += dfs(m - 1, i, 0, grid);
        }
        for (int i = 0; i < m; ++i) {
            if (!vis[i * n] && grid[i][0]) ret += dfs(i, 0, 0, grid);
            if (!vis[i * n + n - 1] && grid[i][n - 1]) ret += dfs(i, n - 1, 0, grid);
        }
        return num - ret;
    }
};

int main() {
    vector<vector<int>> grid = {{0, 0, 0, 0},
                                {1, 0, 1, 0},
                                {0, 1, 1, 0},
                                {0, 0, 0, 0}};
    Solution solution;
    cout << solution.numEnclaves(grid) << endl;
    return 0;
}