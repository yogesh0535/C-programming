// #include<stdio.h>
// int main(){
// int a=6;
// int *p = &a;
//
// printf("the adress of a pointer to a is %p\n",&p);
//  printf("the adress of a pointer to a is %p\n",&a);
//  printf("the adress of a pointer to a is %p\n",p);
// printf("value of a is %d\n",*p);
// printf("value of a is\n %d",a);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int a[]={3,4,56,6};
// printf("values of array\n  %d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3]);
// printf("addresses array is\n %p\n%p\n%p\n%p\n",&a[0],&a[1],&a[2],&a[3]);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int arr[4];
//  printf("enter the marks of 4 students respectively\n");
//  scanf("%d\n%d\n%d\n%d\n",&arr[0],&arr[1],&arr[2],&arr[3]);
//
//  printf("%d\n%d\n%d\n%d\n",arr[0],arr[1],arr[2],arr[3]);
//  return 0;
// }

// #include<stdio.h>
// int main(){
// int mark[5];
//  int i;
// for(i=0;i<5;i++){
// printf("enter marks of student\n");
// scanf("%d",&mark[i]);
// }
//
// for(i=0;i<5;i++)
// {
// printf("%d\n",mark[i]);
// }
// return 0;
// }

 //relaion between array and pointer airthmeticaly as ++,--
 //#include<stdio.h>
 //int main(){
 //  char a='4';
 //  char *p = &a;
 //  printf("%d\n",&a);
 //  printf("%d\n",p);
 //  printf("%c\n",*p);
 //  p+2;
 //  printf("%d\n",p+2);
 //  return 0;
 //}
// 
// #include<stdio.h>
// int main(){
// int arr[]={1,2,3};
// int b = 10;
// printf("%x\n", &b);
// printf("value at 2nd position is %d\n",arr[1]);
// printf("the addres of first element of array is %lu\n",&arr[0]);
// printf("the addres of first element of array is %p\n",&arr[0]);
// printf("the addres of first element of array is %d\n",arr);
// printf("the addres of second element of array is %x\n",&arr[1]);
// printf("the addres of second element of array is %p\n",arr+1);
// printf("the addres of third element of array is %p\n",arr+2);
// 
// printf("the value at adress first element of array is %d\n",*(&arr[0]));
// printf("the value at adress first element of array is %d\n",arr[0]);
// printf("the value at adress first element of array is %d\n",*(arr));
// printf("the value at adress second element of array is %d\n",*(&arr[1]));
// printf("the value at adress second element of array is %d\n",arr[1]);
// printf("the value at adress second element of array is %d\n",*(arr+1));
// 
//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int i;
//     int sum = 0;
//     printf("%d", sum);
// 
//for (i = 0; i < 10; i++)
//    scanf("%d", &a[i]);
// 
//for (i = 0; i < 10; i++)
//     sum = sum + a[i];
//printf("sum of elements of array is %d", sum);
//     return 0;
//}
//

#include<stdio.h>
int main(){
    int arr[2][3];
    int i,j;
for( i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        printf("\t");
    }
}
for( j=0;j<3;j++){
    for(i=0;i<2;i++){
        scanf("%d",&arr[j][i]);
        printf("\t");
}
printf("\n");
}
    return 0;
}
















