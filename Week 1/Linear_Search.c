#include<stdio.h>
int main(){
    int size,key,i,count=0;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d",&key);
    for(i=0;i<size;i++){
        if(arr[i]==key){
            printf("Key is found at %d position\n",i+1);
            count=count+1;
        }
    }
    if(count==0){
        printf("Key is not found");
    }
    return 0;
}
