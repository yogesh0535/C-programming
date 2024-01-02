#include<stdio.h>
int main(int argc, char const *argv[])
{
    // find the minimum number from a array 
    int a[] = {5,4,2,1,-3,5};
    int minimum = a[0];
    for(int i=0; i < 6; i++){
        if(a[i] < minimum){
            minimum = a[i];
        }
    }
    printf("%d", minimum);
    return 0;
}
