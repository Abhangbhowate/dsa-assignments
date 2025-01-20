#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n + 10];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int cond;
    printf("enter 1 if u want to insert element at first:\nenter 2 if u want to insert element at last:\nenter 3 if u want to insert element at any given position:");
    scanf("%d", &cond);

    if (cond == 1)
    {
        for (int i = n; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        printf("enter the number you want to insert:");
        scanf("%d", &arr[0]);
    }
    else if (cond == 2)
    {
        printf("enter the number you want to insert:");
        scanf("%d", &arr[n]);
    }
    else if (cond == 3)
    {
        int x;
        printf("enter the position you want to insert an element:");
        scanf("%d", &x);
        for (int i = n; i >= x - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        printf("enter the number you want to insert:");
        scanf("%d", &arr[x - 1]);
    }
    else
    {
        printf("error");
    }
    for (int i = 0; i <= n; i++)
    {
        printf("the elements are:%d\n", arr[i]);
    }

    return 0;
}