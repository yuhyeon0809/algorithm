// author : yuhyeon0809
// problem : #2805 나무 자르기 
// url : https://www.acmicpc.net/problem/2805
#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int a[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    int high=0, low=0, mid;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        high = max(high, a[i]);
    }
    long long sum;
    int ans = -1;
    while(high >= low) {
        mid = (high + low) / 2;
        sum = 0;
        for(int i = 0; i < N; i++) {
            if(a[i] - mid > 0) sum += a[i] - mid;
        }
        if(sum < M) high = mid - 1;
        else { 
            ans = max(ans, mid);
            low = mid + 1;
        }
    }
    cout << ans;
}