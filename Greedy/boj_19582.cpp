// author : yuhyeon0809
// problem : #19582 200년간 폐관수련했더니 PS 최강자가 된 건에 대하여 *
// url : https://www.acmicpc.net/problem/19582
#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    long long limit[N], prize[N], sum=0, max_p = 0;
    for(int i = 0; i < N; i++)
        cin >> limit[i] >> prize[i];
    
    int except = 0;
    for(int i = 0; i < N; i++) {
        if(sum <= limit[i]) {
            sum += prize[i];
            max_p = max(max_p, prize[i]);
        }
        else if(sum - max_p > limit[i] || max_p < prize[i])
            except++;
        else {
            except++;
            sum -= max_p;
            sum += prize[i];
        }
        if(except > 1) {
            cout << "Zzz"; return 0;
        }
    }
    cout << "Kkeo-eok";
    return 0;
}