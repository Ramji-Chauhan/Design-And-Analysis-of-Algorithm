#include <stdio.h>
#include <stdlib.h>
void TIP(int [],int);
int main(void)
{
    int t,n,i;
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
        TIP(arr,n);
    }
    return 0;
}
void TIP(int arr[],int n)
{
    int i,j,k,f=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=i;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    printf("%d %d %d \n",i+1,j+1,k+1);
                    exit(0);
                }
            }
        }
    }
    printf("No sequence found \n",i,j,k);
}