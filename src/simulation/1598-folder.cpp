#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0,n=logs.size();
        for (int i = 0; i < n; ++i) {
            if (logs[i]=="../"){
                cnt-=!cnt?0:1;
            }else if (logs[i]!="./"){
                cnt+=1;
            }
        }
        return cnt;
    }
};

int main(){

    return 0;
}

