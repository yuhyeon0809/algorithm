// author : yuhyeon0809
// problem : #1780 종이의 개수
// url : https://www.acmicpc.net/problem/1780
#include <iostream>
using namespace std;

int N;
int a, b, c;
int mat[3000][3000];

void paper(int x, int y, int n) {
    int m = n/3;

    bool clear = true;
    int temp = mat[x][y];

    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (mat[i][j] != temp) {
                clear = false;
                break;
            }
        }
    }

    if (clear == true) {
        if (mat[x][y] == -1) a++;
        else if (mat[x][y] == 0) b++;
        else c++;
    }
    else {
        if (m == 1) {
            for (int i=x; i<x+3; i++) {
                for (int j=y; j<y+3; j++) {
                    if (mat[i][j] == -1) a++;
                    else if (mat[i][j] == 0) b++;
                    else c++;
                }
            }
        }
        else {
            paper(x, y, m);
            paper(x, y+m, m);
            paper(x, y+2*m, m);
            paper(x+m, y, m);
            paper(x+m, y+m, m);
            paper(x+m, y+2*m, m);
            paper(x+2*m, y, m);
            paper(x+2*m, y+m, m);
            paper(x+2*m, y+2*m, m);
        }
    }
}

int main() {
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> mat[i][j];
        }
    }
    
    paper(0, 0, N);

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';

    return 0;
}