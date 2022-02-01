// author : yuhyeon0809
// problem : #1253 좋다
// url : https://www.acmicpc.net/problem/1253
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int n, ans, p1, p2;
ll arr[2005];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
        long long key = arr[i]; 
        p1 = 0, p2 = n - 1; 
        while(p1 < p2){ 
            if(arr[p1] + arr[p2] == key){ 
                if(p1 != i && p2 != i){
                    ans++;
                    break;
                }
                else if(p1 == i) p1++;
                else if(p2 == i) p2--;
            }
            else if(arr[p1] + arr[p2] < key) p1++;
            else p2--;
        }
    }
    cout << ans;
    return 0;
}