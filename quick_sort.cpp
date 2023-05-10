//
// Created by yuan on 2023/5/10.
//
#include <iostream>
using namespace std;

void quick_sort(int arr[], int n)
{

}


int main()
{
  cout << __FILE__ << endl;
  int arr[] = {4, 5, 6, 1, 3, 2};
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;
  quick_sort(arr, sizeof(arr) / sizeof(arr[0]));
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
