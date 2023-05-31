#include <iostream>
#include <map>
#include <vector>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <stack>

using namespace std;

template<class ... U>
void
Println(U... u)
{
//    ((cout << u << " , "), ...) << endl;

	int last_index = sizeof...(u) - 1;
	int i = 0;
	((i++ < last_index ? (cout << u << " , ") : (cout << u << endl)), ...);

}

template<class ... U>
double
Sum(U... u)
{
	return (... + u);
}

void do_some_work(int num)
{
	cout << " Thread: " << num << endl;
}

class myCompareInt
{
 public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};



int
main()
{
/*	int threadNums = 3;
	vector<thread> threadList;
	threadList.reserve(threadNums);

	for (int i = 0; i < threadNums; ++i)
	{
		threadList.emplace_back(do_some_work, i);
	}

	std::cout << "work in main thread" << std::endl;
// 2 终止 threadNums 个线程
	for (int idx = 0; idx < threadNums; ++idx)
	{
		threadList[idx].join();
	}

	std::cout << "main thread end" << std::endl;
	return 0;

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

	stack<int> stack1;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.pop();*/
/*	set<int, myCompareInt>s;
	// write your code here......

	for (int i = 0; i < 5; ++i) {
		s.insert(i);
	}
	for (auto it= s.begin(); it!= s.end(); ++it) {
		cout << *it << " ";
	}

	return 0;*/




}



