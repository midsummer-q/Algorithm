//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个整数n，输出1～n的所有整数，遇到5时停止
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"This is a break test.";

    return 0;
}
