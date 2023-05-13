#include <iostream>
#include <map>
#include <vector>
#include <thread>
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

int
main()
{
	int threadNums = 3;
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
}