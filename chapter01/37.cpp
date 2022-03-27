//
// Created by midsummer-q on 2022/3/27.
//
// 输入一些整数，并将其逆序输出
#include <iostream>

using namespace std;
#define MAX 105
int a[MAX];

int main() {
    int n = 0, x;
    while (cin >> x) { //Ctrl+z，回车，结束
        a[n++] = x;
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << endl;
    }

    return 0;
}
