#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 1, 9, 6};
    int search = 9;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            printf("found index is : %d\n", i);
            return 0;
        }
    }
    printf("item not found");
    return 0;
}