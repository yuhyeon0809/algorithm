// author : yuhyeon0809
// problem : #19639 배틀로얄
// url : https://www.acmicpc.net/problem/19639
#include <iostream>
#include <vector>
using namespace std;

int X, Y, M;
vector<int> x;
vector<int> y;
int a, damage;

int main() {
    cin >> X >> Y >> M;
    for(int i = 0; i < X; i++) {
        cin >> a;
        x.push_back(a);
        damage += a;
    }
    for(int i = 0; i < Y; i++) {
        cin >> a;
        y.push_back(a);
        damage -= a;
    }

    if(damage >= M) {
        cout << 0;
    }
    else {
        int enemy = 0; 
        int heal = 0;
        while(1) {
            if(enemy == X && heal == Y) {
                break;
            }
            if(enemy < X && M > x[enemy]) {
                M -= x[enemy];
                enemy++;
                cout << "-" << enemy << '\n';
            }
            else if(heal < Y) {
                M += y[heal];
                heal++;
                cout << heal << '\n';
            }
        }
    }
    return 0;
}