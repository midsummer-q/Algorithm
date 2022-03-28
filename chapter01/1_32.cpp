//
// Created by midsummer-q on 2022/3/27.
//
// 输入n个整数，倒序输出所有整数
#include <iostream>

using namespace std;
int a[100];

void print(int i) {
    cout << a[i] << endl;
    if (i > 0) {
        print(i - 1);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    print(n - 1);

    return 0;
}
