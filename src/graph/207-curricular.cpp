#include <bits/stdc++.h>
using namespace std;

//use toposort to verify circle in the given graph
class Solution {
private:
    int n;
    vector<vector<int>> graph;
    vector<int> in;
    queue<int> q;

    bool toposort() {
        int cnt = 0;
        while (!q.empty()) {
            int top = q.front();
            q.pop();
            cnt++;
            for (int & i : graph[top]) {
                if (!(--in[i])) q.push(i);
            }
        }
        return cnt == n;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
        n=numCourses;
        in.resize(n,0);
        graph.resize(n);
        for (auto & prerequisite : prerequisites) {
            int from = prerequisite[1];
            int to = prerequisite[0];
            graph[from].push_back(to);
            in[to]++;
        }

        for (int i = 0; i < n; ++i) {
            if (!in[i]) q.push(i);
        }

        return toposort();

    }
};

int main() {
    vector<vector<int>> pre={{1,0}};
    Solution sol;
    cout << sol.canFinish(3, pre) << endl;
    return 0;
}