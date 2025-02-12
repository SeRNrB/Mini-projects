#include <stdio.h>

int main() {
    double zahl1, zahl2, produkt;
    char weiter;

    do {
        
        printf("Geben Sie die erste Zahl ein: ");
        scanf("%lf", &zahl1);

        printf("Geben Sie die zweite Zahl ein: ");
        scanf("%lf", &zahl2);

        produkt = zahl1 * zahl2;

        printf("Das Produkt betraegt: %.2lf\n", produkt);

        printf("Moechten Sie eine weitere Berechnung durchfuehren? (j/n): ");
        scanf(" %c", &weiter); 

    } while (weiter == 'j'); 

    printf("Dann eben nicht mehr\n");

    return 0;
}
