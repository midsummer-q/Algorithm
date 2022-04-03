//
// Created by midsummer-q on 2022/4/3.
//
#include <iostream>

#define ElemType int
#define Maxsize 100
using namespace std;

typedef struct {
    ElemType data[Maxsize];
    int length = 0; //顺序表的长度
} SqList;

//插入
bool ListInsert_Sq(SqList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false; //i的值不合法
    }
    if (L.length == Maxsize) {
        return false; //存储空间已满
    }
    for (int j = L.length - 1; j >= i - 1; j--) {
        L.data[j + 1] = L.data[j]; //从最后一个元素开始后移，直到第i个元素后移
    }
    L.data[i - 1] = e; //将新元素e放入第i个位置
    L.length++;        //表长加1
    return true;
}

//删除
bool ListDelete_Sq(SqList &L, int i, int &e) {
    if (i < 1 || i > L.length) {
        return false; //i的值不合法
    }
    e = L.data[i - 1];  //将欲删除的元素保留在e中
    for (int j = i; j <= L.length - 1; j++) {
        L.data[j - 1] = L.data[j];
    }
    L.length--;       //表长减1
    return true;
}

//输出
void Out_Sq(SqList &L) {
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
}

int main() {
    SqList l;

    for (int i = 1; i < 11; i++) {
        ListInsert_Sq(l, i, i);
    }
    Out_Sq(l);
    cout << endl;
    int e;
    ListDelete_Sq(l, 5, e);
    cout << "被删除的元素" << e << endl;
    cout << "删除后的顺序表:";
    Out_Sq(l);
    return 0;
}