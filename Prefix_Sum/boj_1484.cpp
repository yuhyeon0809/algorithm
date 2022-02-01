// author : yuhyeon0809
// problem : #1484 다이어트
// url : https://www.acmicpc.net/problem/1484
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int G, a, b;
vector<ll> v, ans;

int main() {
    cin >> G;
    for(ll i = 1; i <= 200000; i++)
        v.push_back(i*i);
    while(1) {
        if(b >= v.size()) break;
        if((v[b] - v[a]) > G) a++;
        if((v[b] - v[a]) < G) b++;
        if((v[b] - v[a]) == G) { ans.push_back(sqrt(v[b])); b++; }
    }
    if(ans.size() == 0) cout << "-1";
    else {
        for(int i = 0; i < ans.size(); i++) 
            cout << ans[i] << '\n';
    }
    return 0;
}