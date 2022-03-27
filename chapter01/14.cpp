//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n（0<n<10），输出n!
#include <iostream>

using namespace std;

int main() {
    int n, fac = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }
    cout << "fac(" << n << ")=" << fac;

    return 0;
}
