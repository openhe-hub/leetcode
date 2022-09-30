#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<vector<int>> graph;
    vector<int> vis;
    
    int dfs(int s){
        if (vis[s]){
            return 0;
        }else {
            int cnt=1;
            vis[s]=1;
            for (int i = 0; i < graph[s].size(); ++i) {
                cnt+= dfs(graph[s][i]);
            }
            return cnt;
        }
    }
    
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        graph.resize(n+1);
        vis.resize(n+1);
        for (int i = 0; i < n; ++i) {
            vector<int> vec;
            graph[i]=vec;
            vis[i]=0;
        }

        for (int i = 0; i < restricted.size(); ++i) {
            vis[restricted[i]]=1;
        }
        
        for (int i = 0; i < edges.size(); ++i) {
            int a=edges[i][0];
            int b=edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        return dfs(0);
    }
};

int main(){
    int n=7;
    vector<vector<int>> edges={{0,1},{1,2},{3,1},{4,0},{0,5},{5,6}};
    vector<int> restricted={4,5};
    Solution solution;
    cout<<solution.reachableNodes(7,edges,restricted)<<endl;
    return 0;
}