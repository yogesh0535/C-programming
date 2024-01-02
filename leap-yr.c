
#include<stdio.h>
int main()
{
     int yr;
    printf("enter year witch is not a  leap year\n");
    scanf("%d",&yr);
    
    if(yr%4==0){
    printf("year is a leap year");
    }

    else
    printf("year is not a leap year");

    return 0;
}