                    //  sum of 2 arrays
//#include<stdio.h>
//int main(){
//    int a[4];
//    int b[4];
//    int i,j;
//    int sum[4];
//        printf("enter the elements of first array\n");
//    for(i=0;i<4;i++){
//        scanf("%d",&a[i]);
//    }
//        printf("enter the elements of second array\n");
//        for(i=0;i<4;i++){
//            scanf("%d",&b[i]);
//        }
//
//    for(i=0;i<4;i++){
//         sum[i]=a[i]+b[i];
//    }
//         printf("%d\n",sum[i]);
//    
//    return 0;
//
//}
//

//  sum of ELEMENTS OF ARRAY

 #include<stdio.h>
 int main(){
     int a[4];
     int b[4];
     int i,j;
     int sum;
       printf("enter the elements of first array\n");
     for(i=0;i<4;i++){
         scanf("%d",&a[i]);
     }
     for(j=0;j<4;j++){
         sum=sum+a[i];
     }
     printf("%d",sum);
     //sum[4]=a[0]+a[1]+a[2]+a[3];
     //printf("%d",sum[4]);
 }