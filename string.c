#include<stdio.h>
int main(){
    char name[20];
    gets(name);             /* to input string*/
    puts(name);              /* to print strng*/
    return 0;
}

                        
                        //   length of string
#include<stdio.h>
#include<string.h>
int main(){
    char success[30];
    char hard_work[30];
    printf("enter the first string:\n");
    gets(hard_work);
    printf("enter the second string:\n");
    gets(success);
    char thought[40];
    printf("length of arrays respectively\t\t");
    printf("%d\n",strlen(success));  
    printf("%d\n",strlen(hard_work));  
    printf("joining of 2 arays\n");
    puts(strcat(hard_work,success));
    
    printf("\n\n");

    printf("third arry copied from first and second\n\t");
    puts(strcpy(thought,(strcat(hard_work,success))));
    printf("\n\n");
    int l=(strcmp(hard_work,success));
    if(l=0){
         printf("equal");
        }
     else{
         printf("not equal");
        }

    char reverse=  strrev(success);
    printf("%c",reverse);

    return 0;
}
