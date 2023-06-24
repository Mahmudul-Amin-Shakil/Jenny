#include <stdio.h>
int main()
{
    int aSize, bSize, mSize, i, j;
    int a[10], b[10], Merged[20];
    printf("First Array Size : ");
    scanf("%d", &aSize);
    printf("First Array Elements : ");
    for (i = 0; i < aSize; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Second Array Size : ");
    scanf("%d", &bSize);
    printf("Second Array Elements : ");
    for (i = 0; i < bSize; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < aSize; i++)
    {
        Merged[i] = a[i];
    }
    mSize = aSize + bSize;
    for (i = 0, j = aSize; j < mSize && i < bSize; i++, j++)
    {
        Merged[j] = b[i];
    }
    printf("After Merging\n", mSize);
    for (i = 0; i < mSize; i++)
    {
        printf(" %d ", Merged[i]);
    }
    return 0;
}