#include <iostream>
using namespace std;

bool isSorted(int *arr)
{
    int l = sizeof(arr) / sizeof(arr[0]);
    if (l <= 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    // for (int i = 0; i < size - 1; i++)
    // {
    //     if (arr[i] > arr[i + 1])
    //         return false;
    // }
    return isSorted(arr + 1);
}

int main()
{
    int arr[] = {1, 9, 5, 6};
    if (isSorted(arr))
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}