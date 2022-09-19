#include <iostream>
#include <vector>
#include <queue>

#define RED 1
#define BLUE 2

using namespace std;

//use dfs-colored algorithm to judge bipartite

class Solution {
public:
    int n;
    queue<int> q;
    vector<int> colors;
    vector<int> deg;
    vector<vector<int>> graph;

    bool bfs(int s) {
        q.push(s);
        int color=RED,num=1;
        while (!q.empty()){
            int nxt_num=0;
            for (int i = 0; i < num; ++i) {
                int curr=q.front();
                q.pop();
                colors[curr]=color;
                
                for (int j = 0; j <graph[curr].size(); ++j) {
                    int nxt=graph[curr][j];
                    if (!colors[nxt]){
                        q.push(nxt);
                        nxt_num++;
                    }else if ((colors[nxt]==RED&&color==RED)||
                              (colors[nxt]==BLUE&&color==BLUE)){
                        return false;
                    }
                }
            }
            num=nxt_num;
            color=color==RED?BLUE:RED;
        }
        return true;
    }

    bool isBipartite(vector<vector<int>> &graph) {
        n=graph.size();
        this->graph=graph;
        colors.resize(n);
        deg.resize(n);
        for (int i = 0; i < n; ++i) {
            colors[i]=0;
            deg[i]=graph[i].size();
        }
        for (int i = 0; i < n; ++i) {
            if (deg[i]&&!colors[i]&& !bfs(i)){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> graph={{1,3},{0,2},{1,3},{0,2}};
    cout<<solution.isBipartite(graph)<<endl;
    return 0;
}