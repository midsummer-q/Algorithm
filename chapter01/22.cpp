//
// Created by midsummer-q on 2022/3/26.
//
// 输入n对整数a和b，输出它们的和
#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main()
{
    int n,a,b;
    cin>>n;
    int c[n];
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        c[i] = add(a,b); //调用函数
    }
    for(int i = 0; i < n; i++){
        cout<<c[i]<<endl;
    }

    return 0;
}
