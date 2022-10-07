#include <iostream>
#define N 1005
using namespace std;

int dp[N][N];

int main(){
    int n,v,volume[N],value[N];
    cin>>n>>v;
    for (int i = 1; i <= n; ++i) {
        cin>>volume[i]>>value[i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <=v; ++j) {
            for (int k = 0; k*volume[i]<=j; ++k) {
                dp[i][j]= max(dp[i][j],dp[i-1][j-k*volume[i]]+value[i]*k);
            }
        }
    }
    cout<<dp[n][v]<<endl;
    return 0;
}
