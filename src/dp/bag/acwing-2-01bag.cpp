#include <bits/stdc++.h>
#define N 1005
using namespace std;

int n, volume, volume[N], value[N], dp[N][N];

int main() {
    cin >> n >> volume;
    for (int i = 1; i <= n; ++i) {
        cin >> volume[i] >> value[i];
    }
    //dp
    for (int i = 1; i <= n; ++i) {
        for (int j = volume; j >= 0; j--) {
            if (j >= volume[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - volume[i]] + value[i]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][volume] << endl;
    return 0;
}
