#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
using namespace std;

class Solution {
private:
    vector<int> tree;

    void update(int index,int num){
        while (index<tree.size()){
            tree[index]+=num;
            index+= LOWBIT(index);
        }
    }

    int query(int index){
        int res=0;
        while(index>=1){
            res+=tree[index];
            index-= LOWBIT(index);
        }
        return res;
    }

public:
    int reversePairs(vector<int>& nums) {
        //discretization
        set<int> _set;
        for(int num:nums){
            _set.insert(num);
        }
        int cnt=0;
        unordered_map<int,int> map;
        for(int num:_set){
            map[num]=++cnt;
        }
        //binary-index-tree
        tree.resize(map.size()+1);
        int ret=0;
        for (int i = 0; i < nums.size(); ++i) {
            int low=map[nums[i]];
            int high=map.size();
            ret+= query(high)- query(low);
            update(map[nums[i]],1);
        }
        return ret;
    }
};

int main(){

    return 0;
}