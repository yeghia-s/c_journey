#include <stdio.h>

int main()
{
    int c, btnl;

    btnl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' | c == ' ' | c == '\t')
            ++btnl;
    printf("%d", btnl);
}
