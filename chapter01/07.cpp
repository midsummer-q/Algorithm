//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个年份，判断其是闰年还是平年（非整百年：能被4整除的为闰年。整百年：能被400整除的是闰年）
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if((year%4==0&&year%100!=0)||year%400==0){
        cout<<"闰年"<<endl;
    }else{
        cout<<"平年"<<endl;
    }

    return 0;
}
