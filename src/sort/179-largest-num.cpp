#include <bits/stdc++.h>
using namespace std;

bool cmp(string& s1, string& s2) {
    return (s1+s2)>(s2+s1);
}


class Solution {
   public:
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        string ret="";
        for (int i = 0; i < nums.size(); i++) {
            strs.push_back(to_string(nums[i]));
        }

        sort(strs.begin(), strs.end(), cmp);

        //特判
        bool flag=true;
        for (int i = 0; i < nums.size(); i++)
        {
            ret.append(strs[i]);
            if(strs[i]!="0") flag=false;
        }
        
        return flag?"0":ret;
    }
};