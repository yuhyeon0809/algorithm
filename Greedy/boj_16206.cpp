// author : yuhyeon0809
// problem : #16206 롤케이크
// url : https://www.acmicpc.net/problem/16206
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, a, num_10, num_10n, cut;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vector<int> v;

    for(int i= 0; i < n; i++) {
        cin >> a;
        if(a<10) continue;
        else if(a==10) {
            num_10++; continue;
        }
        else if(a % 10 == 0) {
            num_10n++;
            v.insert(v.begin(), a); continue;
        }
        else 
            v.push_back(a);
    }

    int num = v.size();
    sort(v.begin(), v.begin()+num_10n);
    for(int i = 0; i < num; i++) {
        if (v[i] > 10) {
            if((cut + (v[i]-1) / 10) > m) {
                num_10 = num_10 + (m-cut);
                break;
            }
            cut = cut + (v[i]-1) / 10;
            num_10 = num_10 + v[i] / 10;
        }
    }
    cout << num_10 << '\n';
}
