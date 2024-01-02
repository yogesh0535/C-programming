#include<stdio.h>

//  int main(){
// 
//  int i;
//   int n;
// 
// scanf("%d",&n);
//  i=0;
// while(i<=10){
// printf("%d\n",n*i);
//  i++;
//  } 
//   return 0;
//  }

#include<stdio.h>
int tab(int x, int y){
    for(x=1;x<=10;x++){
        printf("%d\n",x*y);
    }
    return 0;
}

int main(){
    int a,n;
    int table;
   printf("enter number of table required %d\n",n);
   scanf("%d",&n);
   table=tab(a,n);
 printf("%d",table);
    return 0;
}
