//
// Created by midsummer-q on 2022/3/28.
//
// 这道题我是直接用的书上例子所给的数据
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int w[8] = {4, 10, 7, 11, 3, 5, 14, 2};
    double tmp = 0.0;// 已装载到船上的古董的重量
    int ans = 0;     // 已装载的古董个数
    sort(w, w + 8);
    for (int i = 0; i < 8; i++) {
        tmp += w[i];
        if (tmp <= 30) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}