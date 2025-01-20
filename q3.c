#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int cond;
    printf("enter 1 if u want to delete element at first.\nenter 2 if u want to delete element at last.\nenter 3 if u want to delete element at any given position.");
    scanf("%d", &cond);
    if (cond == 1)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    else if (cond == 3)
    {
        int x;
        printf("Enter the position u want to delete the element from:");
        scanf("%d", &x);
        for (int i = x - 1; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("the elements are:%d\n", arr[i]);
    }
}