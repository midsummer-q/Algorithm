//
// Created by midsummer-q on 2022/3/27.
//
// 输入一个学生的信息（包括姓名、学号、性别、年龄、分数）并输出
#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    string number;
    string sex;
    int age;
    float score;
};

int main() {
    student a;
    cout << "请输入学生的姓名、学号、性别、年龄、分数：" << endl;
    cin >> a.name >> a.number >> a.sex >> a.age >> a.score;
    cout << "name:" << a.name << endl;
    cout << "number:" << a.number << endl;
    cout << "sex:" << a.sex << endl;
    cout << "age:" << a.age << endl;
    cout << "score:" << a.score << endl;

    return 0;
}
