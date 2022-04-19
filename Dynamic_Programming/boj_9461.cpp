// author : yuhyeon0809
// #9461 파도반 수열
// url : https://www.acmicpc.net/problem/9461
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T, n;
    long long dp[101];
    cin >> T;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    while(T--) {
        cin >> n;
        for (int i=6; i<=n; i++) 
            dp[i] = dp[i-1] + dp[i-5];

        cout << dp[n] << '\n';
    }

    return 0;
}