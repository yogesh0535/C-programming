
#include<stdio.h>
int main(){
int cp,sp;
int p,l;
float PP,LP;
printf("enter CP and SP respectively\n");

scanf("%d%d",&cp,&sp);

p=sp-cp;
l=cp-sp;
 PP =(p*100)/cp;
 LP = (l*100)/cp;

if(cp<sp){
printf("profit is %d\n",p);
printf("profit percent is %f\n",PP);
}
else{
printf("loss is %d\n",l);
printf("loss percent is %f\n",LP);
}
return 0;
}