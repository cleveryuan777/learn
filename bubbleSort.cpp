//
// Created by yuan on 2023/4/27.
//
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    if (n <= 1)
        return;
    for (int i = 0; i < n; ++i) {
        bool flag = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }

}

int main()
{
    cout << __FILE__ << endl;
    int arr[] = {4, 5, 6, 1, 3, 2};
    for (auto val : arr) {
        cout << val << " ";
    }
    cout << endl;
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    for (auto val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
