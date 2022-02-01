// author : yuhyeon0809
// problem : #1992 쿼드트리
// url : https://www.acmicpc.net/problem/1992
#include <iostream>
#include <vector>
using namespace std;

int N;
char a[65][65];
vector<char> v;

void quadTree(int x, int y, int n) 
{
    int t = a[x][y];

    bool same = true;
    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (a[i][j] != t) same = false;
        }
        if (same == false) break;
    }

    if (same == true) v.push_back(t);
    else {
        v.push_back('(');
        quadTree(x, y, n/2);
        quadTree(x, y+n/2, n/2);
        quadTree(x+n/2, y, n/2);
        quadTree(x+n/2, y+n/2, n/2);
        v.push_back(')');
    }
}

int main() {
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> a[i][j];
        }
    }

    quadTree(0,0,N);

    for (auto x : v)
        cout << x;

    return 0;
}