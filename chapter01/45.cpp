//
// Created by midsummer-q on 2022/3/27.
//
// 输入一行字符，统计单词的个数，单词之间以空格隔开
#include <iostream>
#include <string>

using namespace std;

int countword(string s) {
    int len, i = 0, num = 0;
    len = s.length();
    while (i < len) {
        while (s[i] == ' ') {
            i++;
        }
        if (i < len) {
            num++;
        }
        while (s[i] != ' ' && i < len) {
            i++;
        }
    }
    return num;
}

int main() {
    string s1;
    getline(cin, s1);
    cout << countword(s1) << endl;

    return 0;
}
