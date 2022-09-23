#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
using namespace std;

struct Num{
    int num;
    int index;
};

bool cmp(Num num1,Num num2){
    return num1.num<num2.num;
}

class Solution {
private:
    vector<Num> data;
    vector<int> tree;
    int size;

    void update(int index){
        while(index<=size){
            tree[index]++;
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
    vector<int> countSmaller(vector<int>& nums) {
        size=nums.size();
        vector<int> ans(size);
        tree.resize(size+1,0);

        for (int i = 0; i <size ; ++i) {
            data.push_back({nums[i],i});
        }
        stable_sort(data.begin(),data.end(),cmp);
        for (int i = 0; i < size; ++i) {
            int idx = data[i].index;
            update(idx + 1);
            ans[idx]= query(size)- query(idx+1);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums={5,2,6,1};
    vector<int> ans=sol.countSmaller(nums);
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i]<<" ";
    }
    return 0;
}