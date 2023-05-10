//
// Created by yuan on 2023/4/27.
//
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    if(n <= 1)
        return;
    for (int i = 0; i < n - 1; ++i)
    {
        int minPos = i;
        for (int j = i; j < n; ++j)
        {
            if(arr[j] < arr[minPos])
            {
                minPos = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = tmp;
    }
}


int main()
{
    cout << __FILE__ << endl;
    int arr[] = {4, 5, 6, 1, 3, 2};
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    selectionSort(arr, sizeof(arr)/ sizeof(arr[0]));
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}