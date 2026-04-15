#include <stdio.h>
void squeeze2(char s1[], char s2[])
{
    int i, j, k;

    for (i = j = 0; s1[i] != '\0'; i++) {
        for (k = 0; s2[k] != '\0' && s2[k] != s1[i]; k++)
            ;
        if (s2[k] == '\0')
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}

/* testing the functions */
char string1[] = "confidence";
char string2[] = "captain";

int main()
{
    squeeze2(string1, string2);
    printf("%s", string1);
}
