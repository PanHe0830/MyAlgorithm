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

void MyAlgorithm::Merge(int a[],int temp[], int left, int mid, int right) {
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

void MyAlgorithm::MergeSort(int a[],int temp[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2; // 避免整数溢出
    //递归拆分成较小规模子序列排序 
    MergeSort(a, temp, left, mid);
    MergeSort(a, temp, mid + 1, right);
    Merge(a, temp, left, mid, right);      //合并较小规模问题解
}

void MyAlgorithm::SelectSort(int arr[], int nLength)
{
    for (int i = 0; i < nLength - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1;j<nLength;j++)
        {
            if (arr[j] < arr[minIndex])
            {
				minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
		}
    }
}

void MyAlgorithm::ShellSort(int arr[], int nLength)
{
	int gap = nLength / 2;
    while (gap > 0)
    {
        for (int i = gap; i < nLength; i++)
        {
            int key = arr[i];
            int j = i - gap;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = key;
        }
        gap = gap / 3;
    }
}
