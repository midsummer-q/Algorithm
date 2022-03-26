//
// Created by midsummer-q on 2022/3/26.
//
// 写一个函数，对于字符串类型的数据，取其长度的一半；对于浮点数类型的数据，取其值的二分之一
#include <iostream>
#include <string>
using namespace std;

float half(float x){
    return x/2;
}

string half(string s){
    int n = s.length()/2;
    char *str = new char[n];
    for(int i = 0; i < n; i++){
        str[i] = s[i];
    }

    return str;
}

int main()
{
    float n;
    string st;
    cin>>n>>st;
    cout<<half(n)<<endl;
    cout<<half(st)<<endl;

    return 0;
}
