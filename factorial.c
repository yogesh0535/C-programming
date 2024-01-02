
// #include<stdio.h>
// int main()
// {
//     int i;
//     int n;
//     int factorial=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         factorial = factorial * i; 
//      }
//       printf ("factorial of %d is %d\n",n,factorial);
// }



// factorial using recursion

#include<stdio.h>

int fact(int n){
  if(n<=0){
    printf("1");
  }
    // ternary operator 
    // return (n == 0 || n == 1) ? 1 : n * fact(n-1);
    // int factorial=n*fact(n-1);
    // return factorial;
    else{
    return ( n * fact(n-1));
}
}
int main(){
    int a;
    printf("enter the factorial of\n");
    scanf("%d",&a);
  int f=fact(a);
  printf("%d",f);
    return 0;
}
// 