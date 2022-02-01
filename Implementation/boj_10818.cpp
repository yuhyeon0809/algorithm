// author : yuhyeon0809
// problem : #10818 최소, 최대
// url : https://www.acmicpc.net/problem/10818
#include <iostream>
using namespace std;

int main() {
    int N, a;
    int max = -1000000;
    int min = 1000000;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> a;
        if(a < min) min = a;
        if(a > max) max = a;
    }

    cout << min << ' ' << max << '\n';

    return 0;
}