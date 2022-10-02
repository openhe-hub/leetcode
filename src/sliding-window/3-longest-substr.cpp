#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size(),ret=0,length=0;
        map<char,int> dict;
        while (r<=n-1){
            if (dict[s[r]]){
                while(dict[s[r]]){
                    dict[s[l]]--;
                    l++;
                    length--;
                }
                dict[s[r]]++;
                length++;
            }else{
                dict[s[r]]++;
                length++;
                ret= max(ret,length);
            }
            r++;
        }
        return  ret;
    }
};

int main(){
    string string1="pwwkew";
    Solution solution;
    cout<<solution.lengthOfLongestSubstring(string1)<<endl;
    return 0;
}
