#include <bits/stdc++.h>

#define N 1005
using namespace std;

struct Edge {
    pair<int, int> a;
    int a_id;
    pair<int, int> b;
    int b_id;
    int weight;
};
bool operator<(Edge edge1,Edge edge2){
    return edge1.weight>=edge2.weight;
}

class Solution {
public:
    int n, fa[N];
    priority_queue<Edge> pq;

    //union-find
    void init() {
        for (int i = 0; i < n; ++i) {
            fa[i] = i;
        }
    }

    int find(int x) {
        return x == fa[x] ? x : fa[x] = find(fa[x]);
    }

    void connect(int x, int y) {
        int xr = find(x);
        int yr = find(y);
        fa[xr] = yr;
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
    //


    int dist(int x1, int y1, int x2, int y2) {
        return abs(x1 - x2) + abs(y1 - y2);
    }

    int kruskal() {
        int cnt=0,res=0;
        while(!pq.empty()&&cnt<n-1){
            Edge top=pq.top();
            pq.pop();
            if (!connected(top.a_id,top.b_id)){
                cnt++;
                res+=top.weight;
                connect(top.a_id,top.b_id);
            }
        }
        return res;
    }


    int minCostConnectPoints(vector<vector<int>> &points) {
        n = points.size();
        init();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int x1 = points[i][0], y1 = points[i][1], x2 = points[j][0], y2 = points[j][1];
                pq.push({{x1, y1},i, {x2, y2},j, dist(x1, y1, x2, y2)});
            }
        }
        return kruskal();
    }
};

int main() {
    vector<vector<int>> points={{0,0},{2,2},{3,10},{5,2},{7,0}};
    Solution solution;
    cout<<solution.minCostConnectPoints(points)<<endl;
    return 0;
}