// author : yuhyeon0809
// problem : #11659 구간합 구하기 4
// url : https://www.acmicpc.net/problem/11659
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll n, m, a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vector<ll> pre(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a;
        pre[i] = pre[i-1] + a;
    }
    while(m--) {
        cin >> a >> b;
        cout << pre[b] - pre[a-1] << '\n';
    }
    return 0;
}