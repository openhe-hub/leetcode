#include <iostream>
#define N 105
using namespace std;

int main(){
    int n,v,volume[N][N],value[N][N],group[N],dp[N];
    cin>>n>>v;
    for (int i = 1; i <= n; ++i) {
        cin>>group[i];
        for (int j = 1; j <=group[i]; ++j) {
            cin>>volume[i][j]>>value[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j=v;j>=0;j--){
            for (int k = 1; k <=group[i]; ++k) {
                if (j>=volume[i][k]) dp[j]= max(dp[j],dp[j-volume[i][k]]+value[i][k]);
            }
        }
    }

    cout<<dp[v]<<endl;
    return 0;
}
