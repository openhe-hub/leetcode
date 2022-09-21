#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
private:
    map<int, int> dict;
    vector<int> nums;
    int n;
public:
    string largestPalindromic(string num) {
        n = num.size();
        string ret = "";
        for (int i = 0; i < n; ++i) {
            int ch = num[i]-'0';
            if (!dict.count(ch)) {
                dict.insert(make_pair(ch, 1));
                nums.push_back(ch);
            } else {
                dict[ch]++;
            }
        }
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]!=0&&dict[nums[i]]!=1){
                break;
            }
            if (nums[i]==0){
                return to_string(nums[0]);
            }
        }
        if (nums.size() == 1 && nums[0] == 0) return "0";
        if ((nums.size() == 1 && nums[0] != 0)||(nums.size()==2&&nums[1]==0&&dict[nums[0]]==1)) {
            for (int i = 0; i < dict[nums[0]]; ++i) {
                ret += ('0' + nums[0]);
            }
            return ret;
        } else {
            int max_odd = -1;
            for (int i = 0; i < nums.size(); ++i) {
                if (dict[nums[i]] % 2 == 1) {
                    for (int j = 0; j < (dict[nums[i]] - 1) / 2; ++j) {
                        ret += ('0' + nums[i]);
                    }
                    if (max_odd==-1)  max_odd = nums[i];
                } else {
                    for (int j = 0; j < dict[nums[i]] / 2; ++j) {
                        ret += ('0' + nums[i]);
                    }
                }
            }
            string front = ret;
            reverse(ret.begin(), ret.end());
            if (max_odd!=-1) {
                char mid='0'+max_odd;
                string tmp(1,mid);
                front.append(tmp);
                return front + ret;
            } else {
                return front + ret;
            }
        }
    }
};

int main() {
    Solution solution;
    string num = "0201";
    cout << solution.largestPalindromic(num) << endl;
    return 0;
}