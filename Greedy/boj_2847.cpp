// author : yuhyeon0809
// problem : #2847 게임을 만든 동준이
// url : https://www.acmicpc.net/problem/2847
#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

int n, a, ans;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }
    for(int i = n-2; i >= 0; i--) {
        if(v[i] >= v[i+1]) 
            ans += v[i] - (v[i+1] - 1);
        v[i] = min(v[i], v[i+1]-1);
    }
    cout << ans;
}