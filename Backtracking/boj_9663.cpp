// author : yuhyeon0809
// problem : #9663 N-Queen
// url : https://www.acmicpc.net/problem/9663
#include <iostream>
using namespace std;
#define MAX 40

int N;
bool col[MAX];
bool diag1[MAX];
bool diag2[MAX];
int count = 0;

void solve(int level) {
    if (level == N) {
        count++;
        return;
    }
    for (int i = 0; i < N; i++) {
        if(col[i] || diag1[i+level] || diag2[level-i+N-1]) continue;
        col[i] = diag1[i+level] = diag2[level-i+N-1] = true;
        solve(level + 1);
        col[i] = diag1[i+level] = diag2[level-i+N-1] = false;
    }
}

int main() {
    cin >> N;
    solve(0);
    cout << count;
}