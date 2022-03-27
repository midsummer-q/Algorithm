//
// Created by midsummer-q on 2022/3/27.
//
// 输入n个学生的成绩并将其存入数组中，求其最低分和最高分
#include <iostream>

using namespace std;
int a[100];

int max(int *a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    cout<<"max="<<max(a,n)<<endl;
    cout<<"min="<<min(a,n)<<endl;

    return 0;
}