//
// Created by midsummer-q on 2022/3/29.
//
// 合并排序
#include <iostream>

using namespace std;
// 将两个排好序的子序列进行合并
void Merge(int A[], int low, int mid, int high) {
    int *B = new int[high - low + 1];//申请一个辅助数组
    //i,j分别指向两个待排子序列中当前待比较的元素，k指向辅助数组B中待放置元素的位置
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {      //按从小到大存放到辅助数组B中
        if (A[i] <= A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {       //将数组中剩下的元素放置到数组B中
        B[k++] = A[i++];
    }
    while (j <= high) {
        B[k++] = A[j++];
    }
    for (i = low, k = 0; i <= high; i++) {
        A[i] = B[k++];
    }
    delete[] B;
}

void MergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;     //取中点
        MergeSort(A, low, mid);  //对A[low:mid]中的元素合并排序
        MergeSort(A, mid + 1, high);//对A[mid+1:high]中的元素合并排序
        Merge(A, low, mid, high);       //合并
    }
}

int main() {
    int a[] = {42, 15, 20, 6, 8, 38, 50, 12};
    MergeSort(a, 0, 7);
    for (int i = 0; i <= 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}