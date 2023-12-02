#include<stdio.h>
int main(){

    int a,b,c;
    printf("enter the values of a,b,c respectivey:\n");
    scanf("%d%d%d",&a,&b,&c);
if(a>c){
        if(a>b){
            printf("'a' %d is greater",a);
        }
    }
else{
if(c>b){
    
              printf("'c' %d is greater",c);
        }
        else
        printf("'b' %d is greater",b);
}

return 0;
}
