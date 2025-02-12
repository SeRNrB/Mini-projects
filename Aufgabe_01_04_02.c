#include <stdio.h>

int main() {
    float tPreis, gesamtKosten;
    int anzahlPers = 0;
   
    printf("Einzelpreis pro Ticket eingeben (Euro): ");
    scanf("%f", &tPreis);

    printf("Anzahl der Personen in der Gruppe eingeben: ");
    scanf("%d", &anzahlPers);
    
    gesamtKosten = tPreis * anzahlPers;

    if (anzahlPers > 4) {
        gesamtKosten *= 0.9;  // 10% Rabatt
    }

    printf("Gesamtkosten für die Gruppe: %.2f Euro\n", gesamtKosten);

    return 0;
}