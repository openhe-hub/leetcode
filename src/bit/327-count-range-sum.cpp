#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
using namespace std;
typedef long long ll;

//TODO:UNSOLVED

class Solution {
private:
    vector<ll> tree;
    int size;
    void add(int index,ll num){
        while(index<=size){
            tree[index]+=num;
            index+= LOWBIT(index);
        }
    }

    ll query(int index){
        ll res=0;
        while(index>=1){
            res+=tree[index];
            index-= LOWBIT(index);
        }
        return res;
    }

    ll queryRange(int low,int high){
        return query(high)- query(low-1);
    }


public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        size=nums.size();
        tree.resize(size+1);
        int cnt=0;

        for (int i = 0; i < size; ++i) {
            add(i+1,(ll)nums[i]);
        }

        for (int i = 0; i < size; ++i) {
            for (int j = i; j < size; ++j) {
                ll tmp= queryRange(i+1,j+1);
                if(tmp>=(ll)lower&&tmp<=(ll)upper) cnt++;
            }
        }
        return cnt;
    }
};

int main(){

    return 0;
}