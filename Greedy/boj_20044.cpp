// author : yuhyeon0809
// problem : #20044 Project Teams 팀 역량 맞추기
// url : https://www.acmicpc.net/problem/20044
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n, a;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    n *= 2;
    for (int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    a = 200000;
    for(int i = 0; i < n; i++) {
        a = min(a, v[i]+v[n-i-1]);
    }
    cout << a;
}
