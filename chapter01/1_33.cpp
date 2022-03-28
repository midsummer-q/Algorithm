//
// Created by midsummer-q on 2022/3/27.
//
// 输入一个整数n，输出n的阶乘
#include <iostream>

using namespace std;

long long fac(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << fac(n);

    return 0;
}
