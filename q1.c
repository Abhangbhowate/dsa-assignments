#include <stdio.h>
int main()
{
    int n;
    printf("Enter the elements of the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The entered elements are:%d\n", arr[i]);
    }
    return 0;
}