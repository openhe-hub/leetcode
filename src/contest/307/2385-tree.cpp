#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    vector<vector<int>> graph;
    vector<int> vis;
public:
    void visit(TreeNode *root){
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        if (left!= nullptr){
            graph[root->val].push_back(left->val);
            graph[left->val].push_back(root->val);
            visit(left);
        }
        if (right!= nullptr){
            graph[root->val].push_back(right->val);
            graph[right->val].push_back(root->val);
            visit(right);
        }
    }

    int dfs(int start,int layer){
        int res=0;
        vis[start]=1;
        int cnt=0;
        for (int i = 0; i < graph[start].size(); ++i) {
            if (!vis[graph[start][i]]){
                res= max(dfs(graph[start][i],layer+1),res);
                cnt++;
            }
        }
        if (!cnt) {
            return layer;
        }
        else return res;
    }

    int amountOfTime(TreeNode *root, int start) {
        graph.resize(100005);
        vis.resize(100005);
        for (int i = 0; i < vis.size(); ++i) {
            vis[i]=0;
        }
        visit(root);
        return dfs(start,0);
    }
};

int main() {

    return 0;
}