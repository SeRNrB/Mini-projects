#include <stdio.h>
 
int main(void)
{
    int Zahl1;
    int Zahl2;
 
    printf("Geben Sie bitte eine erste ganze Zahl ein : ");
    scanf(" %d", &Zahl1);
    fflush(stdin);
    printf("Geben Sie bitte eine zweite ganze Zahl ein : ");
    scanf(" %d", &Zahl2);
 
    if (Zahl1 > Zahl2)
    {
        printf("Das Maximum aus %d und %d ist %d\n", Zahl1, Zahl2, Zahl1);
    }
    else
    {
        printf("Das Maximum aus %d und %d ist %d\n", Zahl1, Zahl2, Zahl2);
    }
}