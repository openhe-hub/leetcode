#include <bits/stdc++.h>
#define N 1005
using namespace std;

int n, volume, volume[N], value[N], dp[N];

int main() {
    cin >> n >> volume;
    for (int i = 1; i <= n; ++i) {
        cin >> volume[i] >> value[i];
    }
    //dp
    for (int i = 1; i <= n; ++i) {
        for (int j = volume; j >= 0; j--) {
            if (j>=volume[i]){
                dp[j]= max(dp[j],dp[j-volume[i]]+value[i]);
            }
        }
    }
    cout << dp[volume] << endl;
    return 0;
}
