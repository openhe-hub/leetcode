#include <bits/stdc++.h>
using namespace std;

//use toposort to find circle in undirected graph
class Solution {
private:
    vector<vector<int>> graph;
    vector<int> deg;
    queue<int> q;
    int n;

    bool toposort(){
        int cnt=0;
        while (!q.empty()){
            int top=q.front();
            q.pop();
            cnt++;
            for (int i = 0; i < graph[top].size(); ++i) {
                if((--deg[graph[top][i]])==1) q.push(graph[top][i]);
            }
        }
        return n==cnt;
    }

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        n=edges.size();

        vector<int> ret;

        for (int i = n-1; i >= 0; --i) {
            graph.resize(n+1);
            deg.resize(n+1);
            for (int j = 0; j < n; ++j) {
                if (j!=i){
                    graph[edges[j][0]].push_back(edges[j][1]);
                    graph[edges[j][1]].push_back(edges[j][0]);
                    deg[edges[j][0]]++;
                    deg[edges[j][1]]++;
                }
            }

            for (int j = 1; j <= n; ++j) {
                if (deg[j]<=1) q.push(j);
            }

            if (toposort()) return edges[i];

            graph.clear();
            deg.clear();
        }

        return ret;
    }
};

int main(){
    Solution solution;
    vector<vector<int>> vec={{1,2},{2,3},{3,4},{1,4},{1,5}};
    vector<int> ans=solution.findRedundantConnection(vec);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    return 0;
}