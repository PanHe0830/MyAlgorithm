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
