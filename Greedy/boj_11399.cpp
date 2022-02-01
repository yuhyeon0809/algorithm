// author : yuhyeon0809
// problem : #11399 ATM
// url : https://www.acmicpc.net/problem/11399
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, a, tmp, ans;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        tmp += v[i];
        ans += tmp;
    }
    cout << ans;
}