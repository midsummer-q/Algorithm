//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个大于1的整数n（n<100），若n为奇数，则n变为3n+1；否则n变为n/2。经过若干变换，n会变为1并停止，输出变换次数
#include <iostream>

using namespace std;

int main() {
    int n, count;
    cin >> n;
    while (n > 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        cout << n << endl;
        count++;
    }
    cout << "count=" << count << endl;

    return 0;
}