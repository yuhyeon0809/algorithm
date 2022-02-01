// author : yuhyeon0809
// problem : #1436 영화감독 숌
// url : https://www.acmicpc.net/problem/1436
#include <iostream>
#include <string>
using namespace std;

int N, count, i;

int main() {
    string num;

    cin >> N;
    while(count != N) {
        num = to_string(i);
        if(num.find("666") != string::npos) count++;
        i++;
    }
    cout << i-1 << '\n';

    return 0;
}