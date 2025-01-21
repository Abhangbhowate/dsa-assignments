#include <stdio.h>
int main()
{
    // bubble sort of even elements
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 1; j < n - 1 - i; j += 2)
        {
            if (arr[j + 2] < arr[j])
            {
                int temp = arr[j + 2];
                arr[j + 2] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("the  sorted elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}