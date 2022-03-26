//
// Created by midsummer-q on 2022/3/26.
//
// 输入一个整数n，输出1～n的所有整数
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    } while (i<=n);

    return 0;
}
