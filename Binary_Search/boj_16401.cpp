// author : yuhyeon0809
// problem : #16401 과자 나눠주기
// url : https://www.acmicpc.net/problem/16401
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int M, N;
long long a, high, low, mid, num, length;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> M >> N;
    for(int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
        high = max(high, a);
    } 
    low = 1;
    while(high >= low) {
        num = 0;
        mid = (high + low) / 2;
        for(int i= 0; i < N; i++) {
            if(v[i] < mid) continue;
            num += v[i] / mid;
        }
        if(num >= M) {
            length = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout << length;
    return 0;
}