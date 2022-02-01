// author : yuhyeon0809
// problem : #18870 좌표 압축
// url : https://www.acmicpc.net/problem/18870
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<long long> v1, v2;

int main() {
    cin >> N;

    long long n;
    for (int i=0; i<N; i++) {
        cin >> n;
        v1.push_back(n);
        v2.push_back(n);
    }

    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (auto x : v1) {
        int index = lower_bound(v2.begin(), v2.end(), x) - v2.begin();
        cout << index << ' ';
    }

    return 0;

    // -10 -9 2 4
    // 2 4 -10 4 -9
}