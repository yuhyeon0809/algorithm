// author : yuhyeon0809
// problem : #1541 잃어버린 괄호
// url : https://www.acmicpc.net/problem/1541
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp = 0;
    char op;
    bool bracket = false;

    cin >> sum;
    while(1) {
        cin.get(op);
        if (op == '\n') break;
        cin >> n;

        if (op == '-') {
            bracket = true;
            sum -= temp;
            temp = n;
        }
        else
            if (bracket == true) temp += n;
            else sum += n;
    }
    if (bracket == true) sum -= temp;
    else sum += temp;

    cout << sum << '\n';

    return 0;
}