#include <bits/stdc++.h>
#define ls(x) x<<1
#define rs(x) x<<1|1
using namespace std;

class NumArray {
private:
    vector<int> tree;
    int n;

    void build(int node,int l,int r,vector<int>& nums){
        if (l==r){
            tree[node]=nums[l];
            return;
        }
        int mid=(l+r)/2;
        build( ls(node),l, mid,nums);
        build( rs(node), mid+1,r,nums);
        tree[node]=tree[ls(node)]+tree[rs(node)];
    }

    void change(int index,int val,int node,int l,int r){
        if (l==r){
            tree[node]=val;
            return;
        }
        int mid=(l+r)/2;
        if (index<=mid){
            change(index,val, ls(node),l,mid);
        }else{
            change(index,val, rs(node),mid+1,r);
        }
        tree[node]=tree[ls(node)]+tree[rs(node)];
    }

    int query(int low,int high,int node,int l,int r){
        if (low==l&&high==r){
            return tree[node];
        }
        int mid=(l+r)/2;
        if (high<=mid){
            return query(low,high, ls(node),l,mid);
        }else if (low>=mid+1){
            return query(low,high, rs(node),mid+1,r);
        }else{
            return query(low,mid, ls(node),l,mid)+
                    query(mid+1,high, rs(node),mid+1,r);
        }
    }
public:
    NumArray(vector<int>& nums):n(nums.size()),tree((nums.size()<<2)+2) {
        nums.insert(nums.begin(),0);
        build(1,1,n,nums);
    }

    void update(int index, int val) {
        change(index+1,val,1,1,n);
    }

    int sumRange(int left, int right) {
        return query(left+1,right+1,1,1,n);
    }
};

int main(){
    vector<int> nums={1,3,5};
    NumArray numArray(nums);
//    cout<<numArray.sumRange()<<endl;
    return 0;
}
