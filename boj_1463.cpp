// author: yuhyeon0809
// problem_number: #1463 
// problem_name: 1로 만들기
// problem_url: https://www.acmicpc.net/problem/1463

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[1000005];

int dp(int n) {
    if(n == 1) return 0;
    if(a[n] > 0) return a[n];
    a[n] = dp(n-1) + 1;

    if(n % 2 == 0) a[n] = min(a[n], dp(n/2) + 1);
    if(n % 3 == 0) a[n] = min(a[n], dp(n/3) + 1);
    return a[n];
}

int main() {
    cin >> n;
    cout << dp(n) << '\n';
    return 0;
}