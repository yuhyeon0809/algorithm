// author : yuhyeon0809
// problem : #1920 수 찾기
// url : https://www.acmicpc.net/problem/1920
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

bool BinarySearch(int target, int first, int last) {
    int mid;
    
    while(first <= last) {
        mid = (first + last) / 2;
        if(target == v.at(mid))
            return 1;
        else if(target < v.at(mid))
            last = mid - 1;
        else
            first = mid + 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    int a;
    for(int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cin >> M;
    while(M--) {
        cin >> a;
        cout << BinarySearch(a, 0, N-1) << '\n';
    }
}