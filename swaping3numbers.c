
#include<stdio.h>
 int main()
  {
      int a,b,c;
      printf("before swapping a,b,c");
      scanf("%d%d",&a,&b);
      
      c=a;
      a=b;
      b=c;

      printf("after swapping\n %d\n %d\n",a,b);

  }