//
// Created by midsummer-q on 2022/3/25.
//
// 输入一个学生的成绩score，判断其成绩等级（小于60为不及格，60～69为及格，70～79为中等，80～89为良好，90～100为优秀）
#include <iostream>
using namespace std;
int main()
{
    float score;
    cin>>score;
    if(score>=70){
        if(score<80){
            cout<<"中等"<<endl;
        }else{
            if(score<90){
                cout<<"良好"<<endl;
            }else{
                cout<<"优秀"<<endl;
            }
        }
    }else{
        if(score>=60){
            cout<<"及格！"<<endl;
        }else{
            cout<<"不及格！"<<endl;
        }
    }

    return 0;
}
