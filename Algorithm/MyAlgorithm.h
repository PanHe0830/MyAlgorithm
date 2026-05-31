#pragma once

class MyAlgorithm
{
public:
	MyAlgorithm();
	~MyAlgorithm();
	//============================================================
	// function description: insert sort(插入排序)
	// parameters:
	//		arr - the array to be sorted
	//		nLength - the length of the array
	// return value: void
	// think about: divide the array into sorted and unsorted parts, and repeatedly insert the first element of the 
	//				unsorted part into the correct position in the sorted part until the whole array is sorted.
	//
	void InsertSort(int arr[], int nLength);
	//============================================================

	//============================================================
	void Merge(int arr[], int temp[], int left, int mid, int right);
	void MergeSort(int a[], int temp[], int left, int right);
	//============================================================

	//============================================================
	// function description: select sort(选择排序)
	// parameters:
	//     arr - the array to be sorted
	//     nLength - the length of the array
	// return value: void
	// think about: find the minimum element in unsorted array and swap it with the first element of unsorted array, 
	//				then repeat this process for the remaining unsorted array until the whole array is sorted.
	//
	void SelectSort(int arr[],int nLength);
	//============================================================

	//============================================================
	void ShellSort(int arr[],int nLength);
	//============================================================

	//============================================================
	void QuickSort(int arr[], int left, int right);
	//============================================================
};