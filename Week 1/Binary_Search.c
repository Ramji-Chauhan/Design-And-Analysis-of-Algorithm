#include <stdio.h>
int binarySearch(int arr[], int lb, int ub, int key)
{
    if( ub>=lb)
    {
        int mid = (lb + ub) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (arr[mid]>key)
            {
                return binarySearch(arr, lb, mid - 1, key);
            }
        else
            {
                return binarySearch(arr, mid + 1, ub, key);
            }
    }
    return -1;
}
int main()
{
    int size, i, key, result;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of sorted array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, size - 1, key);
    if (result == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("key found at %d position", result);
    }
    return 0;
}