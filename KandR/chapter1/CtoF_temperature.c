#include <stdio.h>

int main()
{
    int celsius, fahr;
    int lower, upper, step;

    lower = -15;
    upper = 150;
    step = 15;

    celsius = lower;
    printf("%3s %6s\n", "C", "F");
    while (celsius <= upper) {
        fahr = ((9 * celsius) / 5) + 32;
        printf("%3d %6d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
