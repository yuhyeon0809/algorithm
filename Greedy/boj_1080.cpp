// author : yuhyeon0809
// problem : #1080 행렬
// url : https://www.acmicpc.net/problem/1080
#include <iostream>
using namespace std;
#define MAX 55

int N, M;
char A[MAX][MAX];
char B[MAX][MAX];
char a;

void reverse(int x, int y) {
    for(int i = x; i < x+3; i++) {
        for(int j = y; j < y+3; j++) {
            if(A[i][j] == '0') A[i][j] = '1';
            else A[i][j] = '0';
        }        
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> a;
            A[i][j] = a;
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> a;
            B[i][j] = a;
        }
    }

    int count = 0;
    for(int i = 0; i < N-2; i++) {
        for(int j = 0; j < M-2; j++) {
            if(A[i][j] != B[i][j]) {
                count++;
                reverse(i, j);
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(A[i][j] != B[i][j]) {
                count = -1;
                break;
            }
        }
    }
    cout << count;
}