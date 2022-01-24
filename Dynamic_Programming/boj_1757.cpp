// author : yuhyeon0809
// #1757 달려달려
// url : https://www.acmicpc.net/problem/1757
#include <iostream>
#include <algorithm>
using namespace std;

int n, m, d[10005];
int dp[10005][505][2];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
        cin >> d[i];
    
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(j == 0) {
                dp[i][j][0] = max( dp[i - 1][j][0], max(dp[i - 1][j + 1][0], dp[i - 1][j + 1][1]));
            }
            else if(j == 1) {
                dp[i][j][0] = max( dp[i - 1][j + 1][1],dp[i - 1][j + 1][0] );
                dp[i][j][1] = dp[i - 1][j - 1][0] + d[i - 1];
            }
            else {
                dp[i][j][0] = max(dp[i - 1][j + 1][1], dp[i - 1][j + 1][0]);
                dp[i][j][1] = dp[i - 1][j - 1][1] + d[i - 1];
            }
        }
    }
    cout << dp[n][0][0];
    return 0;
}