//Aufgabe_01_05_01
#include <stdio.h>

int main ()
{
    double StartKapital, ZielKapital, prozentsatz, aktuellesKapital;
    int jahr = 0;

    printf("Geben Sie StartKapital ein: ");
    scanf(" %lf", &StartKapital);
    fflush(stdin);

    printf("Geben Sie ZielKapital ein: ");
    scanf(" %lf", &ZielKapital);
    fflush(stdin);

    printf("Geben Sie Prozentsatz ein: ");
    scanf(" %lf", &prozentsatz);
    fflush(stdin);

    aktuellesKapital=StartKapital;
    

    while (aktuellesKapital<ZielKapital)
    {
        aktuellesKapital=aktuellesKapital+ (aktuellesKapital*(prozentsatz/100));  // ;  aktuellesKapital*(prozentsatz+100)/100
        jahr=jahr+1;
    }
    
    printf("Nach %d Jahren beträgt Ihr Kapital %.2lf Euro", jahr, aktuellesKapital);
    return 0;

}