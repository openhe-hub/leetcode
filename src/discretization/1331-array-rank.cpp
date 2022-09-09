#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> _set;
        for(int i=0;i<arr.size();i++){
            _set.insert(arr[i]);
        }
        int cnt=0;
        unordered_map<int,int> map;
        for(int num:_set){
            map.insert(make_pair(num,++cnt));
        }
        for (int i = 0; i < arr.size(); ++i) {
            arr[i]=map[arr[i]];
        }
        return arr;
    }
};

int main(){

    return 0;
}