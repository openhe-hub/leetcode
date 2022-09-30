#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
// f[i][j] 表示从 s 的前 i 个字符中选一个末尾字符为 c 的理想字符串的最长长度

int f[N][26];
class Solution {
public:
    int longestIdealString(string s, int k) {
        memset(f,0,sizeof f);
        int n=s.size();
        // 进行状态转移：因为要用到状态f[i-1]，所以数组下标从1开始进行转移
        for(int i=1;i<=n;++i)
        {
            int c=s[i-1]-'a';
            // 不选c：f[i]直接从状态f[i-1]转移得到
            for(int j=0;j<26;++j) f[i][j]=f[i-1][j];
            // 选c：从f[i-1][c-k~c+k]之间的所有状态进行转移
            for(int j=max(0,c-k);j<min(26,c+k+1);++j)f[i][c]=max(f[i-1][j]+1,f[i][c]);
        }
        // 最终答案为max(f[n][0~25])
        int res=0;
        for(int i=0;i<26;++i)res=max(res,f[n][i]);
        return res;
    }
};

int main(){
    string  string1="jxhwaysa";
    int k=14;
    Solution solution;
    cout<<solution.longestIdealString(string1,k)<<endl;
    return 0;
}