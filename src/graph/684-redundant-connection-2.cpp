#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> fa;
    int n;

    void init(){
        fa.resize(n+1);
        for (int i = 1; i <= n; ++i) {
            fa[i]=i;
        }
    }

    int find(int x){
        return x==fa[x]?x:fa[x]= find(fa[x]);
    }

    void connect(int x,int y){
        int xr= find(x);
        int yr= find(y);
        fa[xr]=yr;
    }

    bool connected(int x,int y){
        return find(x)== find(y);
    }


public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        n=edges.size();
        init();
        for (const auto &item: edges){
            int x=item[0],y=item[1];
            if (!connected(x,y)) connect(x,y);
            else return item;
        }
        return vector<int>{};
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