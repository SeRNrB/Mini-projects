#include <stdio.h>
 
int main(void)
{
    char userinput = 'j';
 
    while (userinput == 'j')
    {
        double zahl1, zahl2, produkt;
        printf("Zahl1?: ");
        scanf("%lf", &zahl1);
        printf("Zahl2?: ");
        scanf("%lf", &zahl2);
       
        produkt = zahl1 * zahl2;
        printf("Produkt = %.2lf\n", produkt);
       
        fflush(stdin);
        printf("Nochmal? (j/n)\n");
        scanf("%c", &userinput);
    }
    printf("Dann eben nicht mehr!");
}