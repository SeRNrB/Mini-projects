#include <stdio.h>

int main ()
{
int a, b =0;
char weiter;

    do 
    {
    printf("Gib erste ganze Zahl (a):\n");
    scanf(" %d", &a);

    printf("Gib zweite ganze Zahl (b):\n");
    scanf(" %d", &b);

    printf("a geteilt durch b: %d, Rest: %d\n", a/b, a%b);
    printf("Noch ein Mal rechnen? j? \n");
    scanf(" %c", &weiter); 
    }
    while (weiter == 'j' || weiter == 'J');
return 0;
}