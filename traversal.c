#include <stdio.h>
int main()
{
    int arr[100], size, i;
    printf("size of array :");
    scanf("%d", &size);
    printf("elements of array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("elements of array are :");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}