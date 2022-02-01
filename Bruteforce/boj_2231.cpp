// author : yuhyeon0809
// problem : #2231 분해합
// url : https://www.acmicpc.net/problem/2231
#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    int n, pn=0;
    n=N;
    while(n!=0) {
        n/=10;
        pn++;
    }

    int temp, sum;
    for(int i=N-pn*9; i < N; i++) {
        sum = i;
        temp = i;
        while(temp) {
            sum += temp % 10;
            temp = temp / 10;
        }
        if(sum==N) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}