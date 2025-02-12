#include <stdio.h>


int sucheMin(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int a, b, min;
    printf("Geben min und max Zahl ein: ");
    scanf(" %d %d", &a, &b);

    min = sucheMin(a, b);

    printf("%d das ermittlere Minimum\n", min);
    return 0;
}


/*
Der ternäre Operator in C:
Der ternäre Operator (?:) ist eine Kurzform von if-else, die in einer einzigen Zeile geschrieben werden kann.
Die allgemeine Sbntaa lautet: Bedingung ? Ausdruck_wenn_wahr : Ausdruck_wenn_falsch;
*/