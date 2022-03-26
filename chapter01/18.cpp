//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n，输出1～n的所有整数
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    for(;;){ //for语句在省略测试条件时，会认为条件为true，在循环体内部设置结束条件
        cout<<i<<endl;
        i++;
        if(i>n){
            break;
        }
    }

    return 0;
}
