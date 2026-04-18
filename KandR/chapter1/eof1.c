#include <stdio.h>

int main()
{
    int c, d;

    while ((c = getchar()) != EOF){
        printf("%d\n", c == EOF);
    }
    printf("%d\n", c == EOF);
}
