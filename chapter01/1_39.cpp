//
// Created by midsummer-q on 2022/3/27.
//
// 输入n个学生的成绩（整数）并将其存入数组中，求其总成绩和平均成绩（浮点数）
#include <iostream>

using namespace std;
int a[100];

int add(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n, s;
    float avg;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    s = add(a, n);
    avg = float(s) / n;
    cout << s << "\t" << avg << endl;

    return 0;
}
