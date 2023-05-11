//
// Created by yuan on 2023/5/11.
//

#include <iostream>
using namespace std;
void counting_sort(int* arr, int n)
{
	if (n <= 1)
		return;
	// 找到数组中的数据范围
	int max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	int* C = new int[max + 1];


	// 计算每个元素的个数，放入数组C中
	for (int i = 0; i < n; ++i)
	{
		C[arr[i]]++;
	}


	// 依次累加
	for (int i = 1; i <= max; ++i)
	{
		C[i] = C[i - 1] + C[i];
	}


	// 临时数组r，存储排序之后的结果
	int* r = new int[n];

	for (int i = n - 1; i >= 0; --i)
	{

		int index = (C[arr[i]]--) - 1;
		r[index] = arr[i];

	}
	for (int i = 0; i < n; ++i)
	{
		arr[i] = r[i];
	}

	delete[] C;
	delete[] r;

}

int main()
{
	cout << __FILE__ << endl;
	int arr[] = { 4, 5, 6, 1, 3, 2 };
	for (auto val : arr)
	{
		cout << val << " ";
	}
	cout << endl;
	counting_sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (auto val : arr)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}
