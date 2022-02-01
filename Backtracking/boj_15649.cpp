// author : yuhyeon0809
// #15649 N과M(1)
// url : https://www.acmicpc.net/problem/15649
#include <iostream>
using namespace std;
#define MAX 10

int N, M;
int arr[MAX];
bool isused[MAX];

void solve(int level) {
    if (level == M) {
        for (int i = 0; i < M; i++) cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (isused[i]) continue;
        isused[i] = true;
        arr[level] = i;
        solve(level + 1);
        isused[i] = false;
    }
}

int main() {
    cin >> N >> M;
    solve(0);
}