// author : yuhyeon0809
// problem : #2003 수들의 합 2
// url : https://www.acmicpc.net/problem/2003
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll n, m, a, b, tmp, ans;
vector<ll> v;

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    a = 0; 
    while(1) {
        if(tmp >= m) tmp -= v[a++];
        else if(b == n) break;
        else if(tmp < m) tmp += v[b++];
        if(tmp == m) ans++;
    }
    cout << ans;
}