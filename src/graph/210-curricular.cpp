#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n,cnt=0;
    vector<int> in,res;
    vector<vector<int>> graph;
    queue<int> q;

    void toposort(){
        while (!q.empty()){
            int top=q.front();
            q.pop();
            cnt++;
            res.push_back(top);
            for (auto &i:graph[top]) {
                if (!(--in[i])) q.push(i);
            }
        }
        if (cnt!=n) res.clear();
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        n=numCourses;
        in.resize(n);
        graph.resize(n);

        for (const auto &item: prerequisites){
            int from=item[1];
            int to=item[0];
            graph[from].push_back(to);
            in[to]++;
        }

        for (int i = 0; i < n; ++i) {
            if (!in[i]) q.push(i);
        }

        toposort();
        return res;
    }
};

int main(){

    return 0;
}