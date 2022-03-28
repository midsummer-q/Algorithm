//
// Created by midsummer-q on 2022/3/27.
//
// 输入n个学生的成绩并将其存入动态数组a[]中，统计不及格的人数
#include <iostream>

using namespace std;

int count(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 60) {
            sum++;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n]; // 动态数组
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "no pass:" << count(a, n) << endl;
    delete[] a;

    return 0;
}