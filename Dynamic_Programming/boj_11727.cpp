// 2xn 타일링 2
#include <iostream>
using namespace std;

int n;
long long dp[1001];

int main() {
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 3;

    if (n % 2 == 0) {
        for (int i=4; i<=n; i+=2) 
            dp[i] = (dp[i-2]*4 -1) % 10007;
    }
    else {
        for (int i=3; i<=n; i+=2)
            dp[i] = (dp[i-2]*4 + 1) % 10007;
    }

    cout << dp[n] << '\n';

    return 0;
}