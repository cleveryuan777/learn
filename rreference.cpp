//
// Created by yuan on 2023/4/29.
//

#include <iostream>
#include <chrono>
#include <cstring>

class X {
public:
	X() {std::cout << "X ctor" << std::endl;}
	X(const X& x) {std::cout << "X copy" << std::endl;}
	~X() {std::cout << "X dtor" << std::endl;}
	void show() {std::cout << "show X" << std::endl;}
};

X make_x()
{
	return X();
}


class BigMemortPoll
{
public:
	explicit BigMemortPoll():pool_(new char [size]) {}
	static const int size = 4096;
	BigMemortPoll& operator=(BigMemortPoll &&other) noexcept
  	{
		std::cout << "move(operator=)" << std::endl;
		if (nullptr != pool_)
		{
			delete [] pool_;
		}
		pool_ = other.pool_;
		other.pool_ = nullptr;
		return *this;

	}


	BigMemortPoll(const BigMemortPoll &other):pool_(new char [size])
	{
		std::cout << "copy" << std::endl;
		std::memcpy(pool_, other.pool_, size);
	}
	~BigMemortPoll()
	{
		if (nullptr != pool_)
			delete [] pool_;

	}

private:
	char* pool_;
};


BigMemortPoll make_pool()
{
	return BigMemortPoll();
}


int main()
{
//	X x2 = make_x();
//	x2.show();
//
//	std::string s2("aaaaa");

	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < 1; ++i)
	{
		BigMemortPoll x;
		x = make_pool();
	}
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> diff = end - start;
	std::cout << diff.count();

}
