// 
// #include<stdio.h>
// int main(){
    // FILE *ptr=NULL;
    // ptr=fopen("myfile.txt","r");
    // for getting character from the file

    //  char c=fgets(ptr);
    // printf("the character I read was %c\n",c);
    //   c=fgetc(ptr);
    // printf("the character I read was %c\n",c);

    //  for d=getting string from file
    // char str[10];
    // fgets(str,3,ptr);
    // printf("the string is %s\n",str);
    //    fclose(ptr);
// 
    // return 0;
// }
// #include<stdio.h>
// int main(){
    // FILE *ptr=NULL;
    // char string[100]="I am a student of BCA at Sanskriti University";
    // ptr=fopen("myfile.txt","w");
    // fprintf(ptr,"%s",&string);
    // fscanf(ptr,"%s",&string);
//   printf("\nthe content of this file is unknown to me %s\n",string);    
    // 
    // return 0;
// }
#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("myfile.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf", number);
    fclose(fptr);

    return 0;
}






















