#include <stdio.h>

#define MULTIPLE 1
#define SINGLE 0

int main()
{
    int c, state;
    state = SINGLE;

    while ((c = getchar()) != EOF) 
    {
        if (state == MULTIPLE)
        {
            break;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            printf("\n");
            state = MULTIPLE;
        }
        else 
        {
            putchar(c);
            state = SINGLE;
        }
    }
}
