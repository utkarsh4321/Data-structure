#include <stdio.h>

int front = -1;
int rear = -1;
void enque(int que[], int n, int key)
{
    if (rear == n - 1)
        return;
    if (rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    que[rear] = key;
}

void deque(int que[])
{
    // int temp = NULL;
    if (rear == -1)
        return;
    if (front == rear)
    {
        // temp = que[front];
        que[front] = 0;
        front = rear = -1;
    }
    else
    {
        // temp = que[front];
        que[front] = 0;
        front++;
    }
}
// void main()
// {
//     static int que[6];
//     enque(que, 6, 33);
//     enque(que, 6, 89);
//     enque(que, 6, 23);
//     enque(que, 6, 14);
//     enque(que, 6, 32);
//     for (int i = 0; i < 6; i++)
//         printf("%d\n", que[i]);
//     deque(que);
//     for (int i = 0; i < 6; i++)
//         printf("%d", que[i]);
// }