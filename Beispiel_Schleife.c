// Schleife Beispiel  While()

#include <stdio.h>

int main (void)
{
    double x =0;

    printf("Geben Sie Bitte eine Zahl\n");
    scanf(" %lf", &x);
    

    while (x>1)
        {
        x=x/2;
        printf("X ist gleich %5.2lf\n", x);
        }

printf("SchleifenBeispiel wurde abgearbeitet\n");

    return 0;
}

