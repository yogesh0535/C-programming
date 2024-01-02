#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    int salary;
    int age;
};
int main(){
  struct employee e1;
  strcpy(e1.name,"ram");  
  strcpy(e1.name,"shyam");  
  strcpy(e1.name,"mohan");  
  e1.salary=1200;
  e1.salary=2300;
  e1.salary=340;
  e1.age=23;
  e1.age=34;
  e1.age=30;
  printf("%s\n",e1.name);
  printf("%d\n",e1.salary);
   return 0;
}

#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e[10];
    struct employee e1;
    printf("Enter the value for code of e1: ");
    scanf("%d", &e1.code);
    printf("Enter the value for salary of e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%s", e1.name);
     
     struct employee e2;
    printf("Enter the value for code of e2: ");
    scanf("%d", &e2.code);
    printf("Enter the value for salary of e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the value for name of e2: ");
    scanf("%s", e2.name);

   struct employee e3;
    printf("Enter the value for code of e3: ");
    scanf("%d", &e3.code);
    printf("Enter the value for salary of e3: ");
    scanf("%f", &e3.salary);
    printf("Enter the value for name of e3: ");
    scanf("%s", e3.name);

   printf("%d%f%s",e1.code,e1.salary,e1.name);
   printf("%d%f%s",e2.code,e2.salary,e2.name);
   printf("%d%f%s",e3.code,e3.salary,e3.name);
  
    return 0;
}




#include<stdio.h>
struct detail{
  int roll_number;
  char name[10];
   char fathers_name[10];  
   char address[10];
   int pincode;
}e1;

int main(){
 printf("enter the roll number of student\n");
 scanf("%d",&e1.roll_number);

 printf("enter the name of student\n");  
 scanf("%s",&e1.name);


 printf("enter the fathers_name of student\n");  
 scanf("%s",&e1.fathers_name);
 strcpy(e1.fathers_name,"megh shyam");
 
 
 printf("enter the adress of student\n");  
 scanf("%s",&e1.address);
 
 printf("enter the pincode of student\n");  
 scanf("%d",&e1.pincode);

 printf("\nroll numberis %d\n \n the name of programmer is %s\n",e1.roll_number,e1.name);
 printf("\nfather's name is %s\n",e1.fathers_name);
 printf("\naddress is %s\n and \npincode is %d",e1.address,e1.pincode);

  return 0;
}




#include<stdio.h>
struct account{
  int number;
  char name;
  int balance;
};
int main(){
struct account a[200];
int i;
for(int i=1;i<=200;i++){
    struct account a[i];
   printf("enter the account number of %d customer",i);
   scanf("%d",&a[i].number);  
   
   printf("enter the name of %d account holder",i);  
   scanf("%s",&a[i].name);  

   printf("enter the aaccount balance of %d customer",i);  
   scanf("%d",&a[i].balance);
}
int i=0;
while(i<=200){
    struct account a[i];
    printf("%d\n%s\n%d\n",a[i].number,a[i].name,a[i].balance);
    printf("%d\n%s\n%d\n",a[i].number,a[i].name,a[i].balance);
    printf("%d\n%s\n%d\n",a[i].number,a[i].name,a[i].balance);
i++;
}
  return 0;
}



#include<stdio.h>
int main(){
  int i;
  struct student
  {
    int roll_no;
    char name;
    char address;
  } s[3];
 for(i=0;i<=2;i++){
   scanf("%d\t",&s[i].roll_no);
   scanf("%s\t",&s[i].name);
   scanf("%s\t",&s[i].address);
  printf("\n");
 }

 for(i=0;i<=2;i++){
   printf("%d\t",s[i].roll_no);
   printf("%s\t",s[i].name);
   printf("%s\t",s[i].address);
  printf("\n");
 }
  return 0;
}

