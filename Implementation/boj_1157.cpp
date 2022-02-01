// author : yuhyeon0809
// problem : #1157 단어공부
// url : https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[30] = {0, }, n, max=0, ans;
    bool overlap = false;
    string str;
    cin >> str;

    char c;
    for(int i=0; i<str.size(); i++) {
        c = str.at(i);
        n = int(c);

        if(n>=97 && n<=122) n-=32;
        n -= 65;
        a[n] = a[n] + 1;
        
        if (a[n] >= max) {
            if (a[n] == max) overlap = true;
            else {
                max = a[n];
                ans = n+65;
                overlap = false;
            }
        }
    }

    if (overlap == true) cout << '?' << '\n';
    else cout << char(ans) << '\n';

    return 0;
}