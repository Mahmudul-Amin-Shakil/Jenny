#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 1, 9, 6};
    int search = 9;
    int left = 0, right = 4, middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == search)
        {
            printf("the index is : %d", middle);
            return 0;
        }
        else if (arr[middle] > search)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    printf("item not found");
    return 0;
}