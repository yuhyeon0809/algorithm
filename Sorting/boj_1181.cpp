// author : yuhyeon0809
// problem : #1181 단어 정렬
// url : https://www.acmicpc.net/problem/1181
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int N;
vector<string> v;

bool comp(string a, string b) {
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main() {
    string str, temp;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), comp);

    for(int i=0; i<N; i++) {
        if (temp != v[i])
            cout << v[i] << '\n';
        temp = v[i];
    }

    return 0;
}