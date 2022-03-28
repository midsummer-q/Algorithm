//
// Created by midsummer-q on 2022/3/27.
//
// 输入一些字符串，对其进行复制、拼接、比较等操作
#include <iostream>
#include <cstring> //c风格字符串头文件
#include <string>  //C++风格字符串头文件

using namespace std;

int main() {
    char s1[100];
    char s2[20] = "Hello!";
    string str1, str2;
    cin >> s1;
    cout << strlen(s1) << endl;          //求长度
    strcat(s1, s2);          //拼接
    strcat(s1, "abc");       //拼接
    cout << s1 << endl;
    cout << strcmp(s1, s2) << endl;           //比较
    cout << strstr(s1, s2) << endl;           //查找字符串，返回指针
    strcpy(s1, s2);          //复制
    cout << s1 << endl;
    cout << strchr(s1, 'l') << endl;     //查找字符，返回指针
    cout << strrchr(s1, 'l') << endl;    //从右侧查找字符，返回指针
    cout << strlwr(s1) << endl;          //转换为小写
    cout << strupr(s1) << endl;          //转换为大写
    cin >> str1 >> str2;
    cout << str1 + str2 << endl;               //拼接
    cout << str1.find(str2) << endl;     //查找，返回索引

    return 0;
}
