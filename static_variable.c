#include<stdio.h>
int main(){
    static int a=10;
    a--;
    printf("%d",a);
    printf("%d",a);
    return 0;
}
