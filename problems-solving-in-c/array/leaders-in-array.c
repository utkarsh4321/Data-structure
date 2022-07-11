#include <stdio.h>
#include <conio.h>

void lessEff(int arr[], int n)
{
    int isLeader = 0;
    printf("%d\n", arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                isLeader = 1;
            }
            else
            {
                isLeader = 0;
                break;
            }
        }
        if (isLeader)
        {
            printf("%d\n", arr[i]);
        }
    }
}
void eff(int arr[], int n)
{
    int leader = arr[n - 1];
    printf("%d\n", leader);
    for (int j = n - 2; j >= 0; j--)
    {
        if (arr[j] > leader)
        {
            leader = arr[j];
            printf("%d\n", leader);
        }
    }
}
void main()
{
    int arr[] = {7, 9, 1, 3, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // lessEff(arr, n);
    eff(arr, n);
}