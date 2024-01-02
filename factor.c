//  
#include <stdio.h>
int main()
{
     int a;
     int n;
     scanf("%d", &a);
     int count=0;
     for (n = 2; n <= a / 2; n++)
     {
          if (a % n == 0)
          {
               printf("%d \t", n);
               count++;
          }
     }
     printf("\n%d\n",count);
     return 0;
}
