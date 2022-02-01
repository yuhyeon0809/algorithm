// author : yuhyeon0809
// problem : #2750 수 정렬하기
// url : https://www.acmicpc.net/problem/2750
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, a;
vector<int> v;

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
        cout << v[i] << '\n';
    return 0;
}