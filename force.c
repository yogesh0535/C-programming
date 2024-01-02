
// #include<stdio.h>
// float force(float mass);
// 
// int main(){
    // float mass;
    // printf("value of mass\n");
    // scanf("%f",&mass);
    // printf("force is %f",force(mass));
    // return 0;
// }
// 
// float force(float mass){
    // float result=mass*9.8;
    // 
    // return result;
// }

// 
// #include<stdio.h>
// int force(int m, int a){
    // return m*a;
// }
// int main(){
    // int f,m,a;
    // printf("enter the value of acceleration and mass respectively\n");
    // scanf("%d%d",&a,&m);
    // f=force(m,a);
    // printf("%d",f);
    // return 0;
// }

// 
#include<stdio.h>
#include<math.h>
int power(int a, int b){
  int x;
  
  x = pow(a,b);

  return x;
}
int main(){
  int a,b,c;
  printf("enter value of a raised to power b respectively");
 scanf("%d%d",&a,&b);
    c = power(2,3);
   printf("value of a raised to power b is %d",c);

    return 0;
}









