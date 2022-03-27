//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n，输出1～n的所有整数，遇到偶数时不输出
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << "\n";
    }
    cout << "This is a continue test.";

    return 0;
}
