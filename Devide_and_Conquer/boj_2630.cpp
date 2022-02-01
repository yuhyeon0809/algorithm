// author : yuhyeon0809
// problem : #2630 색종이 만들기
// url : https://www.acmicpc.net/problem/2630
#include <iostream>
using namespace std;

int N;
int paper[130][130];
int blue, white;

void solve(int x, int y, int n)
{
    int t = paper[x][y];
    bool one_sheet = true;
    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (paper[i][j] != t) {
                one_sheet = false;
            }
        }
    }

    if (one_sheet == true) {
        if (t == 0) white++;
        else blue++;
    } 
    else {
        solve(x, y, n/2);
        solve(x, y+n/2, n/2);
        solve(x+n/2, y, n/2);
        solve(x+n/2, y+n/2, n/2);
    }
}

int main() {
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> paper[i][j];
        }
    }

    solve(0,0,N);

    cout << white << '\n' << blue << '\n';

    return 0;
}