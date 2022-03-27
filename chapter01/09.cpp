//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个月份，判断该月份属于什么季节（在阳历中，3～5月为春季，6～8月为夏季，9～11月为秋季，12月至来年2月为冬季）
#include <iostream>

using namespace std;

int main() {
    int month, season = 0;
    cin >> month;
    if (month >= 3 && month <= 5) {
        season = 1;
    } else if (month >= 6 && month <= 8) {
        season = 2;
    } else if (month >= 9 && month <= 11) {
        season = 3;
    } else if ((month >= 1 && month <= 2) || month == 12) {
        season = 4;
    }
    switch (season) {
        case 1:
            cout << "春季" << endl;
            break;
        case 2:
            cout << "夏季" << endl;
            break;
        case 3:
            cout << "秋季" << endl;
            break;
        case 4:
            cout << "冬季" << endl;
            break;
        default:
            cout << "输入的月份不对" << endl;
    }

    return 0;
}
