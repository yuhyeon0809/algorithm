// author : yuhyeon0809
// # 11726 2xn 타일링
// url : https://www.acmicpc.net/problem/11726
#include <iostream>
using namespace std;

int n;
long long dp[1001];

int main() {
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for (int i=3; i<=n; i++) 
        dp[i] = (dp[i-1] + dp[i-2])%10007;

    cout << dp[n] << '\n';

    return 0;
}