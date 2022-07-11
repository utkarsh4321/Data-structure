#include <stdio.h>
#include <conio.h>
#include "swap.h"

void lessEff(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    // temp = arr[i];
                    // arr[i] = arr[j];
                    // arr[j] = temp;
                    swap(&arr[j], &arr[i]);
                    break;
                }
            }
        }
    }
}
void eff(int arr[], int n)
{
    int temp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(&arr[i], &arr[count]);
            count++;
        }
    }
}

void main()
{
    int arr[] = {1, 2, 0, 0, 10, 0, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // lessEff(arr, n);
    eff(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}