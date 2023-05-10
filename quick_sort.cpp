#include <algorithm>
#include <iostream>

using namespace std;

int part(int* arr, int low, int high, int )
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
int part(int* arr, int low, int high)
{
  int pivot = arr[high];
  int i = low;
  for (int j = low; j < high; ++j)
  {
    if (arr[j] < pivot)
    {
      swap(arr[i++], arr[j]);
    }
  }
  swap(arr[i], arr[high]);
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


int find_num_k(int* arr, int low, int high, int k)
{
  int mid;
  if(low < high)
  {
    mid = part(arr, low, high);
    if (mid + 1 < k)
    {
      find_num_k(arr, mid + 1, high, k);
    }
    else if (mid + 1 > k)
    {
      find_num_k(arr, low, mid - 1, k);
    }
    else
    {
      return arr[mid];
    }
  }
}


//int main() {
//  int a[10001];
//  int N;
//  cout << "请输入要排序的数据的个数： " << endl;
//  cin >> N;
//  cout << "请输入要排序的数据： " << endl;
//  for (int i = 0; i < N; i++) {
//    cin >> a[i];
//  }
//  cout << endl;
//  quick_sort(a, 0, N - 1);
//  cout << "排序后的序列为： " << endl;
//  for (int i = 0; i < N; i++) {
//    cout << a[i] << " ";
//  }
//  cout << endl;
//  return 0;
//}

int main() {
  int a[10001];
  int N;
  cout << "请输入要数据个数： " << endl;
  cin >> N;
  cout << "请输入数据： " << endl;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  cout << "请输入需要查找第几大的数： " << endl;
  int K;
  cin >> K;
  cout << "结果是" << find_num_k(a, 0, N - 1, K);
  cout << endl;

  return 0;
}