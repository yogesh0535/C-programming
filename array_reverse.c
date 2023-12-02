#include<stdio.h>
int main(){
    printf("Array is: ");
    int a[]={34,54,67,43,23,23,45};
for(int i=0;i<7;i++){
    printf("%d",a[i]);
    printf("\n");
}

printf("reverse of array is: ");
for(int i=7;i>=0;i--){
    
    printf("%d",a[i]);
    printf("\t");
}
}
return 0;