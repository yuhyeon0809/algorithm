// author : yuhyeon0809
// problem : #11047 동전 0
// url : https://www.acmicpc.net/problem/11047
#include <iostream>
#include <vector>
using namespace std;

int N, K;
int a, ans;
vector<int> v;

int main() {
    cin >> N >> K;
    int index = N-1;
    for(int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
        if(a > K) index = i-1;
    }

    for(int i = index; i >= 0; i--) {
        int n = K/v[i];
        if(n != 0) {
            ans += n;
            K -= n*v[i];
        }
        else {
            if(K == 0) break;
        }
    }
    cout << ans;
}