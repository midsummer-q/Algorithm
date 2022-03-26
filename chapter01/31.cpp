//
// Created by midsummer-q on 2022/3/26.
//
// 输入两个数a和b（整数或者浮点数），求这两个数的和值
#include <iostream>
using namespace std;

template<typename T>
T add(T x, T y){
    return x+y;
}

int main()
{
    int a,b;
    double c,d;
    cin>>a>>b>>c>>d;
    cout<<add(a,b)<<"\t"<<add(c,d)<<endl;

    return 0;
}
