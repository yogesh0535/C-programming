#include<stdio.h>
int main(){
    float farh;
    float cels;
    float upper,lower,step;
    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    while (farh <= upper){
        cels = (5.0/9)*(farh-32.0);
        
        // printf("%3.0f %6.if\n",farh,cels);
        printf("%f%f\n",farh,cels);
        farh = farh + step;
        }
        return 0;
    
}
 
