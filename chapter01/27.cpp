//
// Created by midsummer-q on 2022/3/26.
//
// 输入n个整数并将其存入a[]数组，求和后输出和值
#include <iostream>
using namespace std;

int arrayadd(int a[], int n){ //a[n]作为参数时，要分开写，a[]也可以使用*a
    int sum;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

int main()
{
    int n,s;
    int a[1000]; //静态定义长度为1000的数组，静态定义空间数必须是具体的数值或常量
    cin>>n;
    //int a = new int[n]; //动态定义长度为n的数组， 动态定义n可以为变量
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    s = arrayadd(a,n);
    cout<<s<<endl;

    return 0;
}
