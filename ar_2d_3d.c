
#include<stdio.h>
int main(){
    int arr[2][3];
    int i,j;
    for( i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
       for(i=0;i<=1;i++){
        for( j=0;j<=2;j++){
            printf("%d",arr[j][i]);
            printf("\t");
            }
      printf("\n");
        }
 
    return 0;
}


 // #include<stdio.h>
// int main(){
// 
    // int a[2][4]={{2,3,4,3},{3,4,3,2,}};
  // int i;
// for(i=0;i<2;i++){
    // for(int j=0;j<4;j++){
            //  printf("the value of %d and %d is %d\n",i,j,a[i][j]);
            //  printf("%d\n",a[i][j]);
            // 
        // }
      // printf("\n");
// 
    // }
    // return 0;

