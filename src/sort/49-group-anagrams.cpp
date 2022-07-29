#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> dict;
        vector<vector<string>> ret;
        int cnt=0;

        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            priority_queue<char> ch;
            string ans=str;

            //insert and sort
            for (int j = 0; j < str.size(); j++) {
                ch.push(str[j]);
            }
            //reload
            for(int j=str.size()-1;j>=0;j--){
                ans[j]=ch.top();
                ch.pop();
            }
            cout<<ans<<endl;

            //put into map
            if(!dict.count(ans)){
                vector<string> tmp={str};
                ret.push_back(tmp);
                dict.insert(pair<string,int>(ans,cnt++));
            }else{
                ret[dict[ans]].push_back(str);
            }
        }
        return ret;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> strs={"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    sol.groupAnagrams(strs);    
    return 0;
}
