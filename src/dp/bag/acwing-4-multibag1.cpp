#include <iostream>
#define N 10005
using namespace std;

//multi => 01
int main(){
    int n,v,dp[N],volume[N],value[N],ptr=0;
    cin>>n>>v;
    for (int i = 1; i <= n; ++i) {
        int volume_i,value_i,num_i;
        cin>>volume_i>>value_i>>num_i;
        while (num_i--){
            volume[++ptr]=volume_i;
            value[ptr]=value_i;
        }
    }

    for (int i = 1; i <=ptr; i++) {
        for (int j=v;j>=volume[i];j--){
            dp[j]= max(dp[j],dp[j-volume[i]]+value[i]);
        }
    }
    cout<<dp[v]<<endl;
    return 0;
}