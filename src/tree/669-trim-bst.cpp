#include <bits/stdc++.h>

#define NINF INT32_MIN
#define INF INT32_MAX
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
public:
    int low, high;

    bool isValid(int val) {
        return val >= low && val <= high;
    }

    TreeNode *dfs(TreeNode *curr, int lo, int hi, int l, int r) {
        if (curr==NULL) return NULL;
        if (isValid(curr->val)) {
            curr->left = dfs(curr->left, lo, hi, l, curr->val - 1);
            curr->right = dfs(curr->right, lo, hi, curr->val + 1, r);
        } else{
            if (curr->val<lo){
                curr= dfs(curr->right,lo,hi,curr->val+1,r);
            }
            else if (curr->val>hi){
                curr= dfs(curr->left,lo,hi,l,curr->val-1);
            }
        }
        return curr;
    }

    TreeNode *trimBST(TreeNode *root, int low, int high) {
        this->low = low;
        this->high = high;
        return dfs(root, low, high, NINF, INF);
    }
};

int main() {
    TreeNode left={0,NULL,NULL};
    TreeNode *p_left=&left;

    TreeNode right={2,NULL,NULL};
    TreeNode *p_right=&right;

    TreeNode root={1,p_left,p_right};
    TreeNode *p_root=&root;

    Solution solution;
    solution.trimBST(p_root,1,2);




    return 0;
}