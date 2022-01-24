// 1,2,3 더하기
#include <iostream>
using namespace std;

int T, n;
int dp[11] = {0, };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    while(T--) {
        cin >> n;
        
        for (int i=4; i<=n; i++) {
            if (dp[i] != 0) continue;
            else 
                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        cout << dp[n] << '\n';
    }

    return 0;
}