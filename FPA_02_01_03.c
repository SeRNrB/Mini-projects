//Serhii Nerubashchenko
#include <stdio.h>

int main() {
    int eingabe, erwartete_durchlaeufe, durchlaeufe = 0, wert;

    do {
        printf("Geben Sie bitte eine ganze Zahl größer als 1 ein: ");
        scanf("%d", &eingabe);
    } while (eingabe <= 1);

    printf("Es wird nun demnächst eine Schleife starten, die pro Durchlauf Ihren Eingabewert durch 2 teilen wird (OHNE Rest!)\n");

    printf("Geben Sie bitte an, wie oft diese Schleife durchlaufen wird (die Schleife endet, wenn der Wert 0 erreicht wurde) -> ");
    scanf("%d", &erwartete_durchlaeufe);

    wert = eingabe;

    while (wert > 0) {
        printf("%d-ter Durchlauf: %d geteilt durch 2 ergibt (ohne Rest) : %d\n", durchlaeufe + 1, wert, wert / 2);
        wert /= 2;
        durchlaeufe++;
    }

    if (durchlaeufe == erwartete_durchlaeufe) {
        printf("\nKompliment!\n");
    } else {
        printf("\nDas war leider nix ...\n");
    }

    return 0;
}
