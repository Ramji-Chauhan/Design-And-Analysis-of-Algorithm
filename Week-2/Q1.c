#include <stdio.h> 
int BS(int [],int,int,int);
int freq(int [],int,int);
int main(void)
{
    int t,n,i,k;
    printf("Enter The Total Number of Test cases: ");
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        printf("Enter The Size of The Array: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter The Array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter the Element which need to be Searched: ");
        scanf("%d",&k);
        k=freq(arr,n,k);
        if (k)
        {
            printf("Present %d \n",k );
        }
        else
        {
            printf("Key Not Present \n");
        }
    }
    return 0;
}
int BS(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
        return BS(arr, l, mid - 1, x);
    else
        return BS(arr, mid + 1, r, x);
}
  
int freq(int arr[], int n, int x)
{
    int ind = BS(arr, 0, n - 1, x);
    if (ind == -1)
        return 0;
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == x)
        count++, left--;
    int right = ind + 1;
    while (right < n && arr[right] == x)
        count++, right++;
    return count;
}