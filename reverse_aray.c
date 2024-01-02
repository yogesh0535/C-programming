#include<stdio.h>
int main(int argc, char const *argv[])
{
    // program to store an array and then store it in reverse order
    int arr[10], dup[10], i, j;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size= 9;
    for( i = 9; i >= 0; i--)
    {
        dup[size - i] = arr[i];
    }

    printf("Reverse of entered array is: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t", dup[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if(arr[size-i] == dup[i])
        {
            printf("\n Number is equal");
        }
        else{
            printf("\n Number are not equal");
        }
    }
    return 0;
}
