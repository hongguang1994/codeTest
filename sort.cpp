#include <iostream>
#include <vector>

void swap(std::vector<int>& nums, int i, int j)
{
	if ( nums[i] == nums[j] ) return;
	nums[i] ^= nums[j];
	nums[j] ^= nums[i];
	nums[i] ^= nums[j];
}

void bubbleSort(std::vector<int>& nums)
{

}

void selectSort(std::vector<int>& nums)
{

}

void insertSort(std::vector<int>& nums)
{

}

void shellSort(std::vector<int>& nums)
{

}

void heapSort(std::vector<int>& nums)
{

}

void mergeSort(std::vector<int>& nums)
{

}


void quickSort(std::vector<int>& nums)
{

}

void countingSort(std::vector<int>& nums)
{

}

void radixSort(std::vector<int>& nums)
{

}


int main()
{
	return 0;
}
