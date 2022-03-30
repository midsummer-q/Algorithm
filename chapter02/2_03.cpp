//
// Created by midsummer-q on 2022/3/29.
//
// 快速排序
#include <iostream>

using namespace std;

int Partition(int r[], int low, int high) {
    int i = low, j = high, pivot = r[low];
    while (i < j) {
        while (i < j && r[j] > pivot) { j--; }//向左扫描
        if (i < j) {
            swap(r[i++], r[j]);//在r[i]和r[j]交换后，i+1右移一位
        }
        while (i < j && r[i] <= pivot) { i++; }//向右扫描
        if (i < j) {
            swap(r[i], r[j--]);
        }
    }
    return i; //返回基准元素位置
}

/*优化算法可以从右向左扫描，找小于或等于pivot的数r[j]，然后从左向右扫描，找大于pivot的数r[i]，
 * 将r[i]和r[j]交换，一直交替进行，直到i和j相遇为止，这时将基准元素与r[i]交换即可*/
//int Pritition2(int r[], int low, int high) {//划分函数优化
//    int i = low, j = high, pivot = r[low];
//    while (i < j) {
//        while (i < j && r[j] > pivot) { j--; }//向左扫描
//        while (i < j && r[i] <= pivot) { i++; }//向右扫描
//        if (i < j) {
//            swap(r[i++], r[j--]);//r[i]和r[j]交换
//        }
//    }
//    if (r[i] > pivot) {
//        swap(r[i - 1], r[low]);//r[i-1]和r[low]交换
//        return i - 1;//返回基准元素的位置
//    }
//    swap(r[i], r[low]);//r[i]和r[low]交换
//    return i;       //返回基准元素的位置
//}

void QuickSort(int r[], int low, int high) {
    if (low < high) {
        int mid = Partition(r, low, high);
        QuickSort(r, low, mid - 1);
        QuickSort(r, mid + 1, high);
    }
}

int main() {
    int a[] = {30, 24, 5, 58, 18, 36, 12, 42, 39};
    QuickSort(a, 0, 8);
    for (int i = 0; i <= 8; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
