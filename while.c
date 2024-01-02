
//  #include<stdio.h>
//  int main(){
//  int a=0;
//   while(a<=200){
        // printf("counting from 1 to 200 %d\n",a);
        // a++;
    // }
    // }

#include<stdio.h>
int count(int x){
    for(x=1;x<501;x++){
        printf("countings are %d\n",x);
    }
    return 0;
}

int main(){
    int counting,x;
    counting = count(x);
    printf("%d",counting);
    return 0;
}
