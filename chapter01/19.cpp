//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n，输出1～n的所有整数
#include "iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int  i = 1; i <= n; i++){ //for语句可以用初始化语句声明一个局部变量
        cout<<i<<endl;
    }

    return 0;
}
