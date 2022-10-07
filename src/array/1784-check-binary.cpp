#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag= false;
        int pos=0,n=s.size();
        while (pos<=n-1){
            if (flag&&s[pos]=='1') return false;
            if (!flag&&s[pos]=='1'){
                flag=~flag;
                while (s[pos]=='1') pos++;
            }
            pos++;
        }
        return true;
    }
};

int main(){
    string  string1="110";
    Solution solution;
    cout<<solution.checkOnesSegment(string1)<<endl;
    return 0;
}