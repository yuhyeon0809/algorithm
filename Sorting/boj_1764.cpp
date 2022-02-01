// author : yuhyeon0809
// problem : #1764 듣보잡
// url : https://www.acmicpc.net/problem/1764
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M, cnt;
string name[500005];
string ans[500000];

int main() {
    cin >> N >> M;

    for (int i=0; i<N+M; i++) 
        cin >> name[i];

    sort(name, name+N+M);

    for (int i=0; i<N+M-1; i++) {
        if (name[i] == name[i+1]) {
            ans[cnt] = name[i];
            cnt++;
        }
    }

    cout << cnt << '\n';
    for (int i=0; i<cnt; i++)
        cout << ans[i] << '\n';

    return 0;
}