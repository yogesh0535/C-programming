// predefined
// syntax -> rules
// symantic -> logic
// user define
// printf
// they end with ()
// f(x) = x*x*x
// return_type function_name(argument_type argument_name){
//    ..........
// }
#include <stdio.h>
// prototype -> function may be
// anywhere but we define function
// signature
// void greeting();

int main()
{
    int c = 100;
    {
        printf("%d", c);
        void internal_function()
        {
            void more_internal()
            {
                printf("inside the inside");
            }
            more_internal();
            printf("Say Hello");
            // internal_function();
                }
    }
    // internal_function();

    // greeting();
}

void greeting()
{
    printf("Good Morning");
}
