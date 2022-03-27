//
// Created by midsummer-q on 2022/3/26.
//
// 输入n，如果n为10的倍数，则输出3个“very good！”
#include <iostream>

using namespace std;

void print() {
    for (int i = 0; i < 3; i++) {
        cout << "very good!" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    if (n % 10 == 0) {
        print();
    }

    return 0;
}
