#include <bits/stdc++.h>
#define LOWBIT(x) x&(~x+1)
#define N 1005
using namespace std;

int n;
int tree[N];

void update(int index,int num){
    while(index<=n){
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

int queryRange(int low ,int high){
    return query(high)- query(low-1);
}

int main(){

    return 0;
}