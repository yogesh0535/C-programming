
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks of students obtained by student in each subject form 100\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int per=(a+b+c+d+e)/5;
    printf("percentage obtained by student is %d",per);
    return 0;
}
