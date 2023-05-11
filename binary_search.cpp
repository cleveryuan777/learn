//
// Created by yuan on 2023/5/11.
//

#include <iostream>
using namespace std;

int binary_search(int* a, int n, int value)
{
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
//		int mid = (low + high) / 2;
		int mid = low + (high - low) / 2;
		if (a[mid] == value)
		{
			return mid;
		}
		else if (a[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}
	return -1;

}



int binary_search_internally(int* a, int low, int high, int value)
{
	if(low > high) return -1;
	int mid = (low + high) / 2;
	if (a[mid] == value){
		return mid;
	} else if(a[mid] > value)
	{
		return binary_search_internally(a, low, mid - 1, value);
	}
	else{
		return binary_search_internally(a, mid + 1, high, value);
	}
}


int main()
{

	int a[6] = { 2, 4, 5, 6, 7, 8 };
	int ret = binary_search(a, sizeof(a) / sizeof(a[0]), 3);
	int ret1 = binary_search_internally(a, 0, 5, 3);

	cout << "5位于数组的" << ret << "位置" << endl;
	cout << "5位于数组的" << ret1 << "位置" << endl;
	return 0;

}
