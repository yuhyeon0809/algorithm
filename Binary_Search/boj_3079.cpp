// author : yuhyeon0809
// problem : #3079 입국심사
// url : https://www.acmicpc.net/problem/3079
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N, M, ans, high, low, mid, sum;
vector<int> t;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    int a;
    for(int i = 0; i < N; i++) {
        cin >> a;
        t.push_back(a);
    }
    high = 1e18, low = 1;
    while(high >= low) {
        sum = 0;
        mid = (high + low) / 2;
        for(int i = 0; i < N; i++) {
            sum += mid / t[i];
            if(sum >= M) break;
        }
        if(sum >= M) {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
