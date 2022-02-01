// author : yuhyeon0809
// problem : #1018 체스판 다시 칠하기
// url : https://www.acmicpc.net/problem/1018
#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
char mat[55][55];

int main() {
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = 1e9;
    for(int a=0; a <= N-8; a++) {
        for(int b=0; b <= M-8; b++) {
            int num1 = 0, num2 = 0;
            for(int i=a; i<a+8; i++) {
                for(int j=b; j<b+8; j++) {
                    if(mat[i][j] == 'W') {
                        if((i+j) % 2 == 0) num1++;
                        else num2++;
                    }
                    else {
                        if((i+j) % 2 == 0) num2++;
                        else num1++;
                    }
                }
            }
            ans = min({ans, num1, num2});
        }
    }
    cout << ans;
    return 0;
}