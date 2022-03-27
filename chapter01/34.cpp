//
// Created by midsummer-q on 2022/3/27.
//
// 输入一个整数n，输出斐波那契数列的第n项
#include <iostream>

using namespace std;

long long fib(int n) {
    if (n < 1) {
        return -1;
    }
    if (n == 1 || n == 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    long long s;
    cin >> n;
    s = fib(n);
    cout << s << endl;

    return 0;
}
