#include <stdio.h>

/* return the index position of the first string of any common
 * letter between the first string and a second string, in this
 * case, the last instance of a common letter
 */

int any(char s1[], char s2[])
{
    int i = -1;
    int j, k;

    for (j = 0; s1[j] != '\0'; j++){
        for (k = 0; s2[k] != '\0'; k++){
            if (s1[j] == s2[k]){
                i = j;
            }
        }
    }

    return (i);
}

/* testing */

int main()
{
    char s1[] = "jail";
    char s2[] = "cell";
    char s3[] = "change";
    char s4[] = "zoo";

    int first = any(s1, s2);
    int second = any(s1, s3);
    int third = any(s2, s3);
    int fourth = any(s1, s4);

    printf("%d\n", first);
    printf("%d\n", second);
    printf("%d\n", third);
    printf("%d\n", fourth);
}

/* test should return
 * 3
 * 1
 * 1
 * -1
 */
