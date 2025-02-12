#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void schreibezufallszahl(int min, int max)
{
    int x;
    srand(time(0));
    x = rand() % (max - min + 1) + min;
    printf("Random Zahl zwischen max und min :%d", x);
}

int main()
{
    int min, max, x;
    printf("Geben ein Zahl min ein:\n");
    scanf(" %d", &min);
    printf("Geben ein Zahl max ein:\n");
    scanf(" %d", &max);

    schreibezufallszahl(min, max);

    return 0;
}
