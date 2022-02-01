// author : yuhyeon0809
// problem : #4796 캠핑
// url : https://www.acmicpc.net/problem/4796
#include <iostream>

using namespace std;

int l, p, v, a, b;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int count = 1;
    while(1) {
        cin >> l >> p >> v;
        if(l==0 && p==0 && v==0) break;
        a = v/p; b = v%p;
        if(b > l) b = l;
        cout << "Case " << count << ": " << a*l+b << '\n';
        count++;
    }
    return 0;
}