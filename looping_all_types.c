
#include<stdio.h>
int main(){
    int i;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<11);

    return 0;
}

                        // reverse of a given number  
#include<stdio.h>
int main(){
    int a,r;
    printf("enter the number\n");
    scanf("%d",&a);
    int rev=0;
    do{
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    while(a>0);
    printf("the reverse of entered number is %d\n",rev);

    return 0;
}


                            // factorial of a number 
#include<stdio.h>
int main(){
    int n;
      int fact=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      fact=fact*i;
    }
    printf("factorial of number is %d\n",fact);
    return 0;
}
                        // tables 

#include<stdio.h>
int main(){
    int n;
    printf("enter the number till table want");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            printf("\n");
            for(int j=1;j<=10;j++){
                int c=i*j;
                printf("%d\t",c);
            }
    }
    return 0;
}

                          
