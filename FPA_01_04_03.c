// negative/positive Check

#include <stdio.h>
 
int main(void)
{
    int Zahl;
 
    printf("Geben Sie bitte eine ganze Zahl ein : ");
    scanf(" %d", &Zahl);
 
    if (Zahl < 0)
    {
        printf("Ihre Eingabe %d ist eine negative Zahl", Zahl);
    }
    if (Zahl == 0)
    {
        printf("Ihre Eingabe %d ist Null", Zahl);
    }
    if (Zahl > 0)
    {
            printf("Ihre Eingabe %d ist eine postive Zahl", Zahl);
            if (Zahl < 10)
            {
                return 0;
            }
            else
            {
                printf("\nIhre Eingabe %d liegt sogar oberhalb von 10!", Zahl);
            }
    }
   
}