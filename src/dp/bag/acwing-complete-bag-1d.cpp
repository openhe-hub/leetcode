#include<iostream>
using namespace std;
#define N 1010

int main() {
    int dp[N];
    int volume[N], value[N];
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; i++) {
        cin >> volume[i] >> value[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = volume[i]; j <= v; j++) {
            dp[j] = max(dp[j], dp[j - volume[i]] + value[i]);
        }
    }

    cout << dp[v] << endl;
}
