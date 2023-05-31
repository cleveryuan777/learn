//
// Created by yuan on 2023/5/25.
// 一个数组中，有两个不同的数是奇数个，其他的数都是偶数个，找到这两个奇数个的数
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int arr[6] = {1, 2, 1, 2, 3, 4};
	int eor = 0;
	for (auto i : arr)
	{
		eor ^= i;
	}
	int rightOne = eor&(~eor+1);
	int onlyOne = 0;

	for(auto i: arr)
	{
		if((i & rightOne) == 0)
		{
			onlyOne ^= i;
		}
	}
	cout << onlyOne << " " << (onlyOne ^ eor) << endl;
}