#include<stdio.h>
int main(){
  int a,b;
  printf("before swapping a and b");
  scanf("%d%d",&a,&b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("after swapping\n %d\n%d",a,b);

  return 0;

}