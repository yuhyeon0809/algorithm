// author : yuhyeon0809
// problem : #12931 두 배 더하기
// url : https://www.acmicpc.net/problem/12931
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int B[N];
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    int zero = 0, ans = 0;
    while(1) {
        zero = 0;
        for(int i = 0; i < N; i++) {
            if(B[i] % 2 == 1) {
                B[i] -= 1;
                ans++;
            }
            if(B[i] == 0) zero++;
            B[i] /= 2;
        }
        if(zero >= N) break;
        ans++;
    }
    cout << ans;
    return 0;
} 