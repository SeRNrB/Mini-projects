//Serhii Nerubashchenko
#include <stdio.h>

int main() {
    int zielwert, summe = 0, summand, i = 1;

    printf("Geben Sie bitte eine ganze positive Zahl ein: ");
    scanf("%d", &zielwert);

    while (summe < zielwert) {
        printf("Geben Sie bitte den %d-ten (ganzzahligen, positiven) Summanden ein: ", i);
        scanf("%d", &summand);

        summe += summand;

        if (summe < zielwert) {
            printf("Zum angestrebten Gesamtwert fehlen noch: %d\n", zielwert - summe);
        } else if (summe == zielwert) {
            printf("Sie haben den exakten Gesamtwert getroffen!\n");
            return 0;
        }
        i++;
    }

    printf("Sie haben den Gesamtwert leider überboten :-(\n");
    return 0;
}
