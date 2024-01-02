
#include <stdio.h>

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
}

void greeting()
{
    printf("Good Morning");
}
