// author : yuhyeon0809
// problem : #11000 강의실 배정
// url : https://www.acmicpc.net/problem/11000
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a, b, cur, ans;
vector<pair<int, int>> v, q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    while(v.size()) {
        ans++;
        if(v.size()==1) break;
        cur = v[0].second;
        for(int i=1; i<v.size(); i++) {
            a = v[i].first;
            b = v[i].second;
            if(cur <= a) cur = b;
            else q.push_back({a, b});
        }
        
    }
    cout << ans << '\n';
    return 0;
}