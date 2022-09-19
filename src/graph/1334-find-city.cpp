#include <iostream>
#include <vector>

#define INF 0x3f3f3f3f
using namespace std;

//flyod
class Solution {
public:


    int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold) {
        vector<vector<int>> dist(n,vector<int>(n,INF));
        for (int i = 0; i < n; ++i) {
            dist[i][i] = 0;
        }

        for (int i = 0; i < edges.size(); ++i) {
            int a = edges[i][0], b = edges[i][1], weight = edges[i][2];
            dist[a][b] = weight;
            dist[b][a] = weight;
        }

        //floyd core code
        for (int k=0; k<n; ++k) {
            for (int i=0; i<n; ++i) {
                for (int j=0; j<n; ++j) {
                    if (dist[i][k]!=INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        int res = -1, _min = INF;
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (dist[i][j] <= distanceThreshold && i!=j) cnt++;
            }
            if (_min>=cnt){
                _min=cnt;
                res=i;
            }
        }
        return res;
    }
};

int main() {
    int n = 5;
    int threshold = 2;
    vector<vector<int>> graph = {{0, 1, 3},
                                 {0, 8, 4},
                                 {1, 2, 3},
                                 {1, 4, 2},
                                 {2, 3, 1},
                                 {3, 4, 1}};
    Solution solution;
    cout << solution.findTheCity(n, graph, threshold) << endl;
    return 0;
}