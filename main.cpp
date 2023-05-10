#include <iostream>
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


int
main()
{



}