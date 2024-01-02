                    // printing *** stars


 #include<stdio.h>
 int main(){
     int i,j,rows;
printf("enter the number of rows\n");
scanf("%d",&rows);
for(i=0;i<rows;i++){
    for(j=0;j<=i;j++){
        printf("*");
         }
     printf("\n");
     }
     return 0;
 }


                    // printing number in rows


#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter the number till rows required\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++);
        for(j=1;j<=i;j++);
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;






#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++){
        for(b=1;b<=a;b++){
            printf("%d",a);
        }
        printf("\n");
    }
        return 0;
}




#include<stdio.h>
int main(){
        int a,b,n,number=1;
    printf("enter the rows number");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
            for(b=1;b<=a;b++){
                printf("%d",number);
            number++;
        }
        printf("\n");
    }
    
    return 0;
}


                          // 1+4+9+16+25.....n
#include<stdio.h>
int main(){
    int n;
    printf("enter the last digit of series\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\t%d\t+",i*i);
    }
    
    return 0;
}

                         // 1
                         // 2 3
                         // 4 5 6
                         // 7 8 9 10
   #include<stdio.h>
   int main(){
               int rows;
       printf("enter the number of rows\n");
       scanf("%d",&rows);
       int c=1;
       for(int i=1;i<=rows;i++){
              for(int j=1;j<=i;j++){
                  printf("%d\t",c++);
      }
      printf("\n");
   }    
       return 0;
   }
                    //         1
                    //       1 2 3
                    //        1 2 3 4 5
                    //   1 2 3 4 5 6 7
                    // 1 2 3 4 5 6 7 8 9  
#include<stdio.h>
int main(){
     int i,j,k;
     for(i=1;i<=5;i++){
         printf("\n");
        for(k=0;k<=30-i;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("%d",j);
     }    
    return 0;
}
     
                               // 1!+2!+3!+....n!
 #include<stdio.h>
 int main(){
     int fact=1;
     int n;
    printf("enter the last factorial of series");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         fact = fact*i;
     printf("%d+",fact);
 /*    printf("%d!+",i);   */
     }
     printf("\n");
     return 0;
 }
               
                         // largest among given numbers 
#include<stdio.h>
int main(){
    int digits,num;
    int fix=0;
    printf("enter the total numbers\n");
    scanf("%d",&digits);
    for(int i=1;i<=digits;i++){
        printf("enter the %d digit\t",i);
        scanf("%d",&num);
        if(num>fix){
        fix=num;
    }
        else if(num<fix){
        fix=num;
        }
}
        printf("largest number is %d",fix);
    return 0;
}



                            // ascii value of a to z

#include<stdio.h>
void fact(int x){
    int factorial ;
    // for(int i=1;i<=x;i++){
    factorial= x*(fact(x-1));
    // }
     printf("%d",factorial);

}
int main(){
    int a;
    int z;
    scanf("%d",&a);
     fact(a);
    // printf("%d",z);
   return 0;
}




















