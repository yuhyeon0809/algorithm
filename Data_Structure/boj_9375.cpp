// author : yuhyeon0809
// problem : #9375 패션왕 신해빈
// url : https://www.acmicpc.net/problem/9375
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, n, total;
    string cloth, type;

    cin >> N;
    while(N--) {
        cin >> n;
        
        vector<string> v;
        int rec[31] = {0, };
        for (int i=0; i<n; i++) {
            cin >> cloth >> type;
            v.push_back(type);
        }
        sort(v.begin(), v.end());

        int index=-1, type_n=1;
        while(++index <= n-1) {
            rec[type_n]++;
            if (v[index] != v[index+1]) type_n++;
        }

        total = n;
        int ans = 1;
        for (int i=1; i<type_n; i++)
            ans *= rec[i]+1;

        cout << ans-1 << '\n';
    }

    return 0;
}