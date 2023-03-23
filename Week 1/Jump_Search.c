#include<stdio.h>
#include<math.h>

int min(int a, int b){
	if(b>a)
	return a;
	else
	return b;
}
int jumpSearch(int arr[], int x, int n)
{
	int step = sqrt(n);
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	while (arr[prev] < x)
	{
		prev++;
		if (prev == min(step, n))
			return -1;
	}
	if (arr[prev] == x)
		return prev;

	return -1;
}
int main(){
    int size,key,result;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the sorted elements in array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d",&key);
    result=jumpSearch(arr,key,size);
    if(result >= 0)
    printf("Number is at %d index",result+1);
    else
    printf("Number is not exist in the array");
    return 0;
}
