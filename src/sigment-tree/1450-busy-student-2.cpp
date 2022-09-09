#include <iostream>
#include <vector>
#define N 7
#define ls(x) x<<1
#define rs(x) x<<1|1
using namespace std;
//TODO : UNSOLVED!!!
int n,tree[(N<<2)+2];

void build(int node,int l,int r,int val){
    if (l==r){
        tree[node]=val;
        return;
    }
    int mid=(l+r)/2;
    build( ls(node),l,mid,val);
    build( rs(node),mid+1,r,val);
    tree[node]=tree[ls(node)]+tree[rs(node)];
}

void update(int start,int end,int node,int val,int l,int r){
    if (start==l&&end==r){
        tree[node]+=val;
        return;
    }
    int mid=(l+r)/2;
    if (start<=mid) update(start,mid, rs(node),val,l,mid);
    if (end>=mid+1) update(mid+1,end, ls(node),val,mid+1,r);
    tree[node]=tree[ls(node)]+tree[rs(node)];
}

int query(int index,int node,int l,int r){
    if (l==r){
        cout<<node<<endl;
        return tree[node];
    }
    int mid=(l+r)/2;
    if (index<=mid){
        return query(index, ls(node),l,mid);
    }else{
        return query(index, rs(node),mid+1,r);
    }
}



class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        n=startTime.size();
        build(1,1,N,0);
        for (int i = 0; i < n; ++i) {
            int start=startTime[i];
            int end=endTime[i];
            update(start,end,1,1,1,N);
        }
        for (int i = 0; i < 4*N+2; ++i) {
            if (tree[i]) cout<<i<<" "<<tree[i]<<endl;
        }
        return query(queryTime,1,1,N);
    }
};

int main(){
    Solution solution;
    vector<int> start={1,2,3};
    vector<int> end={3,2,7};
    int query=4;
    cout<<solution.busyStudent(start,end,query)<<endl;
    return 0;
}