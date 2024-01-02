//  create a program to store 10 number and array and sum them 
//
// Language: c
// Path: sum.c
// Compare this snippet from reverse.c:
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // take 10 numbers from user and store in array
    int arr[10], sum = 0, i;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sum all the numbers
    for(i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of all the numbers is: %d", sum);
    return 0;
}
print