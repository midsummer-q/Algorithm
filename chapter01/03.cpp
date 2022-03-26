//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个三位数，输出其个位、十位、百位上的数字
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int unit,ten,hundreds;
    cin>>n;
    unit = n%10;
    ten = (n/10)%10;
    hundreds = (n/100)%10;
    cout<<unit<<setw(2)<<ten<<setw(2)<<hundreds<<endl;

    return 0;
}