#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    int n;

    // // malloc function
    // printf("enter the size of array");
    // scanf("%d",&n);
    // ptr=(int *) malloc(n*sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("enter the %d element of array ",i);
    //     scanf("%d",&ptr[i]);
    // }

    // for(int i=0;i<n;i++){

    //     printf("%d element of array is: %d",i,ptr[i]);
    //     printf("\n");
    // }

    

        // calloc function
    printf("enter the size of array\n");
    scanf("%d",&n);
    ptr=(int *) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the %d element of array ",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d element of array is: %d",i,ptr[i]);
        printf("\n");printf("enter the size of array\n");
    scanf("%d",&n);
    ptr=(int *) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the %d element of array ",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("\n");
        printf("%d element of array is: %d",i,ptr[i]);
        printf("\n");
    }
    }


        // realloc {re allocation of array} 

    printf("enter the new size of array you want to create\n");
    scanf("%d",&n);
    ptr=(int *) realloc(ptr ,n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the %d element of array ",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
           printf("\n");
        printf("%d element of array is: %d",i,ptr[i]);
        printf("\n");
    }


    free(ptr);          {for free used memory}
}