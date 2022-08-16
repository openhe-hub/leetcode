#include <bits/stdc++.h>
#define RIGHT 0
#define LEFT 1
typedef long long ll;
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
    bool ifInRange(ll x,ll low,ll high){
        return x>low&&x<high;
    }
    bool verify(TreeNode *curr,int flag,ll _min,ll _max){
        if(curr== nullptr) return true;
        ll val=(ll)curr->val;
        if(!ifInRange(val,_min,_max)) {
            return false;
        }else{
            _min=min(_min,val);
            _max=max(_max,val);
            return verify(curr->left,LEFT,_min,min(val,_max)) && verify(curr->right,RIGHT,max(val,_min),_max);
        }
    }

    bool isValidBST(TreeNode *root) {
        ll val=(ll)root->val;
        ll NINF=-2147483648-1;
        ll INF=2147483648;
        return verify(root->left,LEFT,NINF,val)&& verify(root->right,RIGHT,val,INF);
    }
};

int main() {

    return 0;
}
