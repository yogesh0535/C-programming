#include<stdio.h>
int main(int argc, char const *argv[])
{
    // program to reverse a interger number
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num % 10;
        num = num / 10;
    }
    printf("Reverse of entered number is: %d", reverse);
    return 0;
}
