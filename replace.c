#include <stdio.h>
int main()
{
    int arr[100], size, pos, i, num;
    printf("size of array :");
    scanf("%d", &size);
    printf("elements of array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the pos :");
    scanf("%d", &pos);
    if (pos > size)
    {
        printf("replace is not possible\n");
        return 0;
    }
    else
    {
        printf("enter the num :");
        scanf("%d", &num);
        arr[pos - 1] = num;
        printf("elements of array are :");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
}