//
// Created by midsummer-q on 2022/3/26.
//
// 输入n个字母，如果是小写字母，则将其转换为大写字母，输出转换后的字符串
#include <iostream>
#include <string>

using namespace std;

void strconvert(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    cout << s << endl;
}

int main() {
    string str;
    cin >> str;
    strconvert(str);
//    cout<<str<<endl;

    return 0;
}
