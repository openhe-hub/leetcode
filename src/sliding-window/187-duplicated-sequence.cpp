#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
private:
    map<string, int> dict;
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int size=s.size();
        int left=0,right=9;
        vector<string> ret;
        if (size<=9) return {};
        else{
            while(right++<=size-1){
                string str=s.substr(left++,10);
                if (!dict.count(str)){
                    dict.insert(make_pair(str,1));
                }else {
                    dict[str]++;
                    if (dict[str]==2) ret.push_back(str);
                }
            }
        }
        return ret;
    }
};

int main(int argc, char const *argv[]) {
    string  string1="AAAAAAAAAAAAA";
    Solution solution;
    auto ret=solution.findRepeatedDnaSequences(string1);
    for (auto str:ret) {
        cout<<str<<endl;
    }
    return 0;
}