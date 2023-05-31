#include <stdio.h>
#include <stdlib.h>
int DK(int [],int,int);
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
        printf("Enter The Key Element: ");
        scanf("%d",&k);
        k=DK(arr,n,k);
        if(k==-1)
        {
            printf("No sequence found \n");
        }
        else
        {
            printf("Total Number of Pairs is: %d \n",k+1);
        }
    }
    return 0;
}
int DK(int arr[],int n,int k)
{
    int i,j,l,c=-1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            l=arr[i]-arr[j];
            if(l==k || l==-k)
            {
                c=c+1;
            }
        }
    }
    return c;
}