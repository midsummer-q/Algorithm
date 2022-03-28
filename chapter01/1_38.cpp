//
// Created by midsummer-q on 2022/3/27.
//
/*现在有n盏灯，编号为1～n，开始时所有的灯都是关的，编号为1的人走过来，把编号是1的倍数的灯开关按下（开的关上，关的打开），
 * 编号为2的人把编号是2的倍数的灯开关按下，编号为3的人又把编号是3的倍数的灯开关按下……直到第k个人为止*/
#include <iostream>
#include <cstring>

using namespace std;
bool a[1005]; //记录灯的状态

int main() {
    int n, k;
    bool first = 1;
    memset(a, 0, sizeof(a)); //初始化a数组全部为0
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % i == 0) {
                a[j] = !a[j];
            }
        }
    }
    // 查看每盏灯的状态。
//    for (int i = 1; i <= n; i++) {
//        cout << a[i] << " ";
//    }
//    cout<<endl;
    for (int j = 1; j <= n; j++) {
        if (a[j]) {
            if (first) {
                first = 0;
            } else {
                cout << " ";
            }
            cout << j;
        }
    }

    return 0;
}
