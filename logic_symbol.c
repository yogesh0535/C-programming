#include<stdio.h>
int main(){
    int age;
    char vipPass;
  printf("print age\n");
  scanf("%d",&age);
  scanf("%c",&vipPass);
  
  
  if(( age>=18 && age<=70) || (vipPass=='y')){
     printf("you are above 18 and below 70");
  }
  
  else
  printf("you are not eligible");
  
  return 0;
}