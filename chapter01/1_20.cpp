//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n，输出1～n的所有整数，跳过3的倍数
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;
        }
        cout << i << endl;
    }
    /*--------------------------*/
    int i = 1;
    while (i <= n) { //请读者观察此段代码的问题
        if (i % 3 == 0) {
            continue;
        }
        cout << i << endl;
        i++;
    }
    // 当i=3时，执行不到i++.
    cout << "This is a test.";

    return 0;
}
