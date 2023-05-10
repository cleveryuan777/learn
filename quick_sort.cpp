#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int part(int* arr, int low, int high)
{
  int i = low, j = high, pivot = arr[low]; //基准元素

  while (i < j)
  {
    //从右向左开始找一个 小于等于 pivot的数值
    while (i < j && arr[j] > pivot)
    {
      j--;
    }
    if(i < j)
    {
      swap(arr[i++], arr[j]);  //r[i]和r[j]交换后 i 向右移动一位
    }

    while (i < j && arr[i] <= pivot)
    {
      i++;
    }

    if(i < j)
    {
      swap(arr[i], arr[j--]);  //r[i]和r[j]交换后 i 向左移动一位
    }

  }
  return i;

}


void quick_sort(int* arr, int low, int high)
{
  int mid;
  if(low < high)
  {
    mid = part(arr, low, high);
    quick_sort(arr, low, mid - 1);
    quick_sort(arr, mid + 1, high);
  }
}


int main() {
  int a[10001];
  int N;
  cout << "请输入要排序的数据的个数： " << endl;
  cin >> N;
  cout << "请输入要排序的数据： " << endl;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  cout << endl;
  quick_sort(a, 0, N - 1);
  cout << "排序后的序列为： " << endl;
  for (int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}