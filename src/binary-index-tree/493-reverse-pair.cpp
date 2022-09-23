#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
using namespace std;
typedef long long ll;

class Solution {
private:
    vector<int> tree;

    void update(int index,int num){
        while(index<=tree.size()-1){
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
        int size=nums.size();
        //discretization
        set<ll> allNums;
        for(int num:nums){
            allNums.insert(num);
            allNums.insert((ll)2*num);
        }
        unordered_map<ll,int> map;
        int cnt=0;
        for(ll num:allNums){
            map[num]=++cnt;
        }
        //binary-index-tree
        tree.resize(map.size()+1);
        int ans=0;
        for (int i = 0; i <size; ++i) {
            int low=map[(ll)2*nums[i]];
            int high=map.size();
            ans+= query(high) - query(low);
            update(map[nums[i]],1);
        }
        return ans;
    }
};

int main(){
    vector<int> vec={1,2,1,2,1};
    Solution sol;
    cout<<sol.reversePairs(vec)<<endl;
    return 0;
}