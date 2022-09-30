#include <iostream>
#include <vector>
#include <string>
#include <cstring>

/*
 * bi-partition,dfs,color,graph
 * */
#define UNCOLORED 0
#define RED 1
#define BLUE 2
using namespace std;

class Solution {
public:
    vector<vector<int>> graph;
    vector<int> colors;

    bool dfs(int s,int color,int par){
        if (colors[s]==UNCOLORED){
            colors[s]=color;
            for (int i = 0; i < graph[s].size(); ++i) {
                if (graph[s][i]!=par &&!dfs(graph[s][i], reverse(color),s)){
                    return false;
                }
            }
            return true;
        }else{
            return colors[s]==color;
        }
    }

    int reverse(int color){
        return color==RED?BLUE:RED;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        graph.resize(n+1);
        colors.resize(n+1);

        for (int i = 1; i <= n; ++i) {
            colors[i]=UNCOLORED;
        }
        for (int i = 0; i < dislikes.size(); ++i) {
            int a=dislikes[i][0];
            int b=dislikes[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        for (int i = 1; i <= n; ++i) {
            if (colors[i]==UNCOLORED&& !dfs(i,RED,-1)) return false;
        }
        return true;
    }
};

int main(){
    int n=10;
    vector<vector<int>> nums={{1,2},{3,4},{5,6},{6,7},{8,9},{7,8}};
    Solution solution;
    cout<<solution.possibleBipartition(n,nums)<<endl;
    return 0;
}