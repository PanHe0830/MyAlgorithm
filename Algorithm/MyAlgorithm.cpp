#include "MyAlgorithm.h"

MyAlgorithm::MyAlgorithm()
{

}

MyAlgorithm::~MyAlgorithm()
{

}

void MyAlgorithm::InsertSort(int arr[], int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void MyAlgorithm::Merge(int a[], int left, int mid, int right) {
    int* temp = new int[right - left + 1];                   //临时数组用于存储排序时的数
    int i = left;                                 //分成两块 i指向左边的数字 j指向右边的数字 
    int j = mid + 1;
    int k = 0;                                    //k用于存储数字到临时数组

    while (i <= mid && j <= right) {
        if (a[i] < a[j])    	                  //永远都是 i 和 j 指向的数进行比较
            temp[k++] = a[i++];                   //谁小，谁就先放到临时数组中
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)                             //如果左边还有数没放上去，就依次放上去
        temp[k++] = a[i++];
    while (j <= right)                           //如果是右边还有同上
        temp[k++] = a[j++];

    for (int m = left, n = 0; m <= right; m++, n++)//读取临时数组中的数
        a[m] = temp[n];
}


void MyAlgorithm::MergeSort(int a[], int left, int right) {
    if (left == right)
        return;

    int mid = (left + right) / 2;
    //递归拆分成较小规模子序列排序 
    MergeSort(a, left, mid);
    MergeSort(a, mid + 1, right);
    Merge(a, left, mid, right);      //合并较小规模问题解
}
