//
// Created by midsummer-q on 2022/3/27.
//
// 定义一些一维数组，并赋值、运算、输出
#include <iostream>

using namespace std;
int a[1000000];

int main() {
    //int a[1000000]; //局部（动态），局部数组太大会闪退
    int b[5] = {2, 4, 5};
    int c[] = {1, 2, 3, 4};
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    for (int i = 0; i < 15; i++) {
        cout << b[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 15; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 15; i++) {
        cout << a[i] << endl;
    }

    return 0;

}
