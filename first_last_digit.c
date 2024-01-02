
#include <stdio.h>
int main()
{
    int fd, ld, n;
    scanf("%d", &n);
    ld = n % 10;
    printf("last digit=%d\n", ld);

    do
    {
        n = n / 10;
        printf("%d \t", n);
        fd = n;
    } while (n >= 10);
        printf("\n");

    printf("first number is %d", fd);

    return 0;
}
