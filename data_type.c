#include<stdio.h>
#include<limits.h>
int main(){
    printf("%d\t", CHAR_MAX);
    printf("%d\t", CHAR_MIN);
    printf("%d\t", (char)(1 << (CHAR_BIT - 1 )));
    printf("%d\n", sizeof(char));
    printf("%d\t", INT_MAX);
    printf("%d\t", INT_MIN);
    printf("%lu\n", sizeof(int));
    printf("%d\t", SHRT_MAX);
    printf("%d\t", SHRT_MIN);
    printf("%lu\n", sizeof(short));
    printf("%ld\t", LONG_MAX);
    printf("%ld\t", LONG_MIN);
    printf("%lu\n", sizeof(long));
}
