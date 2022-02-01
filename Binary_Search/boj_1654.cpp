// author : yuhyeon0809
// problem : #1654 랜선 자르기
// url : https://www.acmicpc.net/problem/1654
#include <iostream>
#include <algorithm>
using namespace std;

long long K, N, max_length, ans;
long long lan[10005];

int main() {
    cin >> K >> N;
    for (int i=0; i<K; i++) {
        cin >> lan[i];
        max_length = max(max_length, lan[i]);
    }

    long long l=1, r = max_length, m, n;
    while(l<=r) {
        m = (l+r) / 2;
        n = 0;
        for(int i=0; i<K; i++) {
            n += lan[i] / m;
        }

        if (n < N) r = m-1;
        else {
            if (ans < m) ans = m;
            l = m+1;
        }
    }
    
    cout << ans << '\n';

    return 0;
}