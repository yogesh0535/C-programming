#include<stdio.h>
int main(){
    int a[5];
    int max=0;
for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
for(int i=0;i<5;i++){
    a[i]>max;
    max=a[i];
}
printf("%d",max);
    return 0;
}
