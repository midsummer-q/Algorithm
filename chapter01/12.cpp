//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个整数n，输出n行1～n的整数（输出1～n的整数时遇到5停止）
#include "iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<"i="<<i<<"\n";
        for(int j = 1; j <= n; j++){
            if(j==5){
                break;
            }
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"This is a break test.";

    return 0;
}