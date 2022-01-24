// author : yuhyeon0809
// problem : #15988 1,2,3 더하기 3
// url : https://www.acmicpc.net/problem/15988
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000005 

int n, max_n;
long long num[MAX];
long long mod = 1000000009;

int main() {
    cin >> n;
    int target[n];
    for(int i = 0; i < n; i++) {
        cin >> target[i];
        max_n = max(max_n, target[i]);
    }
    num[1] = 1;
    num[2] = 2;
    num[3] = 4;

    for(int i = 4; i <= max_n; i++)
        num[i] = (num[i-3] + num[i-2] + num[i-1]) % mod;

    for(int i = 0; i < n; i++) {
        int a = target[i];
        cout << num[a] << '\n';
    }
    return 0;
}