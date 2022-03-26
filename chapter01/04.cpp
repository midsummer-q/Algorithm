//
// Created by midsummer-q on 2022/3/25.
//
// 输入3个整数，分别输出其增加1、扩大10倍、缩小10倍的结果。
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a++;
    b*=10;
    c/=10;
    cout<<a<<setw(4)<<b<<setw(4)<<c<<endl;

    return 0;
}