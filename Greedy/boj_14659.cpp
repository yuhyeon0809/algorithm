// author : yuhyeon0809
// problem : #14659 한조 서열정리
// url : https://www.acmicpc.net/problem/14659
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n, a, cur_max, ans; //global var: 0으로 초기화 되어있음

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }

    a=0;
    for(int i=0; i<n; i++) {
        if(cur_max <= v[i]) {
            cur_max = v[i];
            ans = max(ans, a);
            a = 0;
        }
        else a++;
    }
    ans = max(ans, a);
    cout << ans;
}