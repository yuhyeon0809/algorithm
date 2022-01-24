// author: yuhyeon0809
// #2670
// 연속부분 최대곱

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10005

int n;
double arr[MAX], tmp, ans;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    for(int i = 0; i < n; i++) {
        tmp = 1;
        for(int j = i; j < n; j++) {
            tmp *= arr[j];
            ans = max(ans, tmp);
        }
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << ans << '\n';
    return 0;
}