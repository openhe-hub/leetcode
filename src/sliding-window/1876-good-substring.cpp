#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int l=0,r=3,n=s.size(),res=0,cnt=3;
        map<char,int> map;
        //init
        for (int i = l; i <r; ++i) {
            if (!map[s[i]]) cnt--;
            map[s[i]]++;
        }
        if (!cnt) res++;
        //slide
        while (r<=n-1){
            if (map[s[l]]==1) cnt++;
            map[s[l]]--;
            if (map[s[r]]==0) cnt--;
            map[s[r]]++;
            l++;
            r++;
            if (!cnt) res++;
        }
        return res;
    }
};

int main(){
    string  string1="owuxoelszb";
    Solution solution;
    cout<<solution.countGoodSubstrings(string1)<<endl;
    return 0;
}