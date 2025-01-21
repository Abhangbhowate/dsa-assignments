#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("enter the element you want to search:\n");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cnt = i;
        }
    }
    if (cnt == 0)
    {
        printf("The element does not exist in an array.. !( ");
    }
    else
    {
        printf("The element  exist in an array at position %d  ", cnt + 1);
    }
}