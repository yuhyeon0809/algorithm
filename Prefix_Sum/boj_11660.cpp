// author : yuhyeon0809
// problem : #11660 구간합 구하기 5
// url : https://www.acmicpc.net/problem/11660
#include <iostream>
using namespace std;

int n, m, a, b, c, d, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int pre[n+1][n+1] = {0, };
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a;
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a;
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c >> d;
        ans = pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1];
        cout << ans << '\n';
    }

}