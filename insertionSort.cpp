
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {

  if (n <= 1)
    return;
  for (int i = 1; i < n; ++i) {
    int value = arr[i];
    int j = i - 1;
    for (; j >= 0; --j) {
      if (arr[j] > value) {
        arr[j + 1] = arr[j];
      } else
        break;
    }
    arr[j + 1] = value;
  }

}

int main() {
  cout << __FILE__ << endl;
  int arr[] = {4, 5, 6, 1, 3, 2};
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;
  insertionSort(arr, sizeof(arr) / sizeof(arr[0]));
  for (auto val : arr) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}


