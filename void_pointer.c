
#include<stdio.h>
int main(){
    int a =190;
    float b=200;
    void *ptr;
    ptr=&b;
    printf("the value of b is %f\n",*((float *)ptr));
    ptr =&a;
    printf("the value of a is %f\n",*((int *)ptr));

    return 0;
}
