// author : yuhyeon0809
// problem : #1874 스택 수열
// url : https://www.acmicpc.net/problem/1874
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, x, index=0, ptr=0, max=0;
    int num[100005];
    char ans[100005];
    stack<int> s;

    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> num[i];

    while(n--) {
        x = num[index++];
        if (x > max) {
            for (int i=max+1; i<=x; i++) {
                s.push(i);
                ans[ptr++] = '+';
            }
        }
        else {
            if (s.top() != x) {
                cout << "NO" << '\n';
                return 0;
            }
        }
        s.pop();
        ans[ptr++] = '-';
        if (max < x) max = x;
    }

    for (int i=0; i<ptr; i++) cout << ans[i] << '\n';

    return 0;
}