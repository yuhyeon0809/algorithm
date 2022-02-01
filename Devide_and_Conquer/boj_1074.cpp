// author : yuhyeon0809
// problem : #1074 Z
// url : https://www.acmicpc.net/problem/1074
#include <iostream>
using namespace std;

int N, r, c;
int ans;

void func_z(int x, int y, int size) {
    if (x==r && y==c) {
        cout << ans << '\n';
        return;
    }

    if (x <= r && r < x+size && y <= c && c < y+size) {
        func_z(x, y, size/2);
        func_z(x, y+(size/2), size/2);
        func_z(x+(size/2), y, size/2);
        func_z(x+(size/2), y+(size/2), size/2);
    }
    else {
        ans += size * size;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> r >> c;

    func_z(0, 0, (1 << N));
    
    return 0;
}