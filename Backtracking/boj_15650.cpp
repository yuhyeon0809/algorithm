// author : yuhyeon0809
// problem : #15650 N과M(2)
// url : https://www.acmicpc.net/problem/15650
#include <iostream>
using namespace std;
#define MAX 10

int N, M;
int arr[MAX];

void solve(int level, int num) {
    if(level == M) {
        for(int i = 0; i < M; i++) cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for(int i = num; i <= N; i++) {
        arr[level] = i;
        solve(level + 1, i + 1);
    }
}

int main() {
    cin >> N >> M;
    solve(0, 1);
}