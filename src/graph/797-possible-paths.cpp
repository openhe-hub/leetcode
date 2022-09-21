#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> graph;
    vector<vector<int>> paths;
    int n;
public:
    void dfs(vector<int> path, int curr) {
        path.push_back(curr);
        if (curr == n - 1) {
            paths.push_back(path);
            return;
        } else {
            for (int i = 0; i < graph[curr].size(); ++i) {
                dfs(path, graph[curr][i]);
            }
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph) {
        this->graph = graph;
        this->n = graph.size();
        vector<int> path;
        dfs(path, 0);
        return paths;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> graph = {{1, 2},
                                 {3},
                                 {3},
                                 {}};
    auto ret=solution.allPathsSourceTarget(graph);
    for (const auto &path: ret){
        for (const auto &item: path){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}