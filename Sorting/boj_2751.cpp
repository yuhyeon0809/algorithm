// author : yuhyeon0809
// problem : #2751 수 정렬하기 2
// url : https://www.acmicpc.net/problem/2751
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a;
    vector<int> v;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}