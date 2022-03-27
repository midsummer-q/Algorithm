//
// Created by midsummer-q on 2022/3/26.
//
// 输入n，输出1～n的所有整数（无返回值）
#include <iostream>

using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print(n);

    return 0;
}

