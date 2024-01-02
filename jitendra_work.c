#include<stdio.h>
int main(){
    int size,i,n;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter the %d element of array: ",i);
        scanf("%d",&arr[i]);
    }
    int yes=0;
     printf("Enter the element that you want to check: ");
     scanf("%d",&n);
    for(i=0;i<size;i++){
        if(arr[i]==n){
            yes=yes+1;
        }}
    if (yes==1){
        printf("%d number is present ",n);
    }
    else{
        printf("%d number is not present",n);
    }
     return 0;
}