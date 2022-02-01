// author : yuhyeon0809
// problem : #4949 균형잡힌 세상
// url : https://www.acmicpc.net/problem/4949
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;

    while(1) {
        getline(cin, str);
        stack<char> s;
        if(str[0] == '.') break;

        for (int i=0; i<str.length()-1; i++) {
            if(str[i] == '(') s.push('(');
            if(str[i] == '[') s.push('[');
            if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') s.pop();
                else { cout << "no" << '\n'; break;}
            }
            if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') s.pop();
                else {cout << "no" << '\n'; break;}
            }
            if(s.empty() && i==str.length()-2) cout << "yes" << '\n';
            else if(!s.empty() && i==str.length()-2) cout << "no" << '\n';
        }
    }

    return 0;
}
