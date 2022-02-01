// author : yuhyeon0809
// problem : #2839 설탕 배달
// url : https://www.acmicpc.net/problem/2839
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int n, a, ans=5000, count=0;
    cin >> n;
    a = n/5;
    if(n%5==0) {
        cout << a; return 0;
    }
    for(int i=a; i >= 0; i--) {
        if((n-5*i)/3==0 || (n-5*i)%3!=0) continue;
        ans = min(ans, i+(n-5*i)/3);
        count++;
    }
    if(count==0) ans=-1;
    cout << ans;

    return 0;
}