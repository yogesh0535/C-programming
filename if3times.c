 
//  #include<stdio.h>
// int main(){
//   int a,b,c;
//   scanf("%d%d%d",&a,&b,&c);
//   
//   if(a>b && a>c){
    //   printf("%d is largest",a);
//   }
//  
//  if(b>a && b>c){
    //  printf("%d is larger",b);
//  }
//  
//  if(c>a && c>b){
    //  printf("%d is larger",c);
//  }
// 
//  if(a==b && c==a){
    //  printf("all are equal");
//  }
//  
//   return 0;
// 
// }
#include<stdio.h>
int main(){
    int a,b,c;
printf("enter 3 numbers for comparision\n");
scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("a is greater");

        else{
        if(b>a){
            if(b>c)
            printf("b is greater");

            else{
            if(c>a){
                if(c>b)
                    printf("c is greater");
            else
            printf("3 number are equal");
            
            }
                }
        }
    }
 }
    return 0;
}
