#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
using namespace std;

class NumArray {
private:
    vector<int> nums;
    vector<int> tree;
    int size;

    void add(int i,int num){
        while(i<=size){
            tree[i]+=num;
            i+= LOWBIT(i);
        }
    }

    int query(int i){
        int ans=0;
        while(i>=1){
            ans+=tree[i];
            i-= LOWBIT(i);
        }
        return ans;
    }
public:
    NumArray(vector<int>& nums):tree(nums.size()+1),nums(nums),size(nums.size()) {
        for (int i = 0; i < size; ++i) {
            add(i+1,nums[i]);
        }
    }

    void update(int index, int val) {
        add(index+1,val-nums[index]);
        nums[index]=val;
    }

    int sumRange(int left, int right) {
        return query(right+1)-query(left);
    }
};

int main(){
    vector<int> data={1,3,5};
    NumArray numArray(data);
    cout<<numArray.sumRange(0,2)<<endl;
    numArray.update(1,2);
    cout<<numArray.sumRange(0,2)<<endl;;
}
