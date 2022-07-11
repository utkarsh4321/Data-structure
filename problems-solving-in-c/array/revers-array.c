#include <stdio.h>
#include <conio.h>

void lessEff(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void eff(int arr[], int left, int right)
{

    int temp;
    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void main()
{
    int arr[] = {2, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = 1; j <= 2; j++)
    {
        lessEff(arr, n);
    }
    // eff(arr, 0, 2 - 1);
    // eff(arr, 2, n - 1);
    // eff(arr, 0, n - 1);

    for (int k = 0; k < n; k++)
    {
        printf("%d", arr[k]);
    }
}