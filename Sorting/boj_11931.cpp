// author : yuhyeon0809
// problem : #11931 수 정렬하기4
// url : https://www.acmicpc.net/problem/11931
#include <iostream>
#include <algorithm>
using namespace std;

int N;
int a[1000001];

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) 
        cin >> a[i];
    sort(a, a+N, greater<int>());
    for(int i = 0; i < N; i++) 
        cout << a[i] << '\n';
    return 0;
}