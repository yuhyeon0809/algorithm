// author : yuhyeon0809
// problem : #1068 트리
// url : https://www.acmicpc.net/problem/1068
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, root, rm, ans;
vector<vector<int>> node;

void tree(int now) {
    if(rm == now) return;
    int count = node[now].size();
    if(count == 0) {
        ans++; return;
    }
    else if(count == 1) {
        if(node[now][0] == rm) ans++;
    }
    else {
        for(int i = 0; i < count; i++) 
            tree(node[now][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    node.resize(n);
    for(int i = 0; i < n; i++) {
        int parent;
        cin >> parent;
        if(parent == -1) root = i;
        else node[parent].push_back(i);
    }
    cin >> rm;
    tree(root);
    cout << ans;

    return 0;
}