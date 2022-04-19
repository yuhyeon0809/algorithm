// author : yuhyeon0809
// #2748 피보나치 수 2
// url : https://www.acmicpc.net/problem/2748
#include <iostream>
using namespace std;

int n;
long long fib[95];

int main() {
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++)
        fib[i] = fib[i-1] + fib[i-2];
    cout << fib[n];
    return 0;
}