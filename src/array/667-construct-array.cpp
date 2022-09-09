#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;
        if (k&1){
            for (int i = 1; i <= (k-1)/2; ++i) {
                ans.push_back(i);
                ans.push_back(n-i+1);
            }
            for(int i=(k-1)/2+1;i<=n-(k-1)/2;i++) ans.push_back(i);
        } else{
            for (int i = 1; i <= k/2; ++i) {
                ans.push_back(i);
                ans.push_back(n-i+1);
            }
            for (int i=n-k/2;i>=k/2+1;i--) ans.push_back(i);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    auto vec=sol.constructArray(5,2);
    for (auto &x:vec) {
        cout<<x<<endl;
    }
    return 0;
}