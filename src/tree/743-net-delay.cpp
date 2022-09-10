#include <bits/stdc++.h>

#define N 105
#define INF 0x3f3f3f3f
using namespace std;

struct Edge {
    int from;
    int to;
    int weight;
};

bool operator<(Edge edge1, Edge edge2) {
    return edge1.weight >= edge2.weight;
}

class Solution {
public:
    priority_queue<Edge> pq;
    vector<Edge> graph[N];
    int dist[N], vis[N];

    void dijkstra(int start) {
        pq.push({start, start, 0});
        while (!pq.empty()) {
            Edge top = pq.top();
            pq.pop();
            int from = top.to;
            if (!vis[from]) {
                vis[from] = 1;
                for (int i = 0; i < graph[from].size(); ++i) {
                    int to = graph[from][i].to;
                    int weight = graph[from][i].weight;
                    if (dist[to] > dist[from] + weight) {
                        dist[to] = dist[from] + weight;
                        pq.push({from, to, dist[to]});
                    }
                }
            }
        }
    }


    int networkDelayTime(vector<vector<int>> &times, int n, int k) {
        for (int i = 1; i <= n; ++i) {
            vis[i] = 0;
            dist[i] = i == k ? 0 : INF;
        }
        for (auto &time: times) {
            int from = time[0];
            int to = time[1];
            int weight = time[2];
            graph[from].push_back({from, to, weight});
        }

        dijkstra(k);

        int res = -1;
        for (int i = 1; i <= n; ++i) {
//            cout << dist[i] << endl;
            if (dist[i] == INF) {
                return -1;
            } else {
                res = max(res, dist[i]);
            }
        }
        return res;
    }
};

int main() {
    vector<vector<int>> edges = {{2, 1, 1},
                                 {2, 3, 1},
                                 {3, 4, 1}};
    int n = 4;
    int k = 2;
    Solution solution;
    cout << solution.networkDelayTime(edges, n, k) << endl;
    return 0;
}