//programm Wall o Mate
//Zweck Prognoze der Wahl

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Partei 6
#define MAXZAHL 49

int main() {
    int tipp[Partei] = {5, 12, 23, 34, 41, 45}; // Fester Lottotipp
    int anzahlZiehungen, i, j, treffer;
    int ziehung[Partei];
    int statistik[7] = {0}; // Index 3-6 für Trefferzählung

    // Zufallsgenerator initialisieren
    srand(time(NULL));

    // Anzahl der Ziehungen abfragen
    printf("Wie viele Ziehungen sollen simuliert werden? ");
    scanf("%d", &anzahlZiehungen);

    // Ziehungen simulieren
    for (i = 0; i < anzahlZiehungen; i++) {
        int gezogen[MAXZAHL + 1] = {0}; // Array zur Vermeidung doppelter Zahlen
        treffer = 0;

        // 6 Zufallszahlen für eine Ziehung ermitteln
        for (j = 0; j < Partei; j++) {
            int zahl;
            do {
                zahl = rand() % MAXZAHL + 1;
            } while (gezogen[zahl]); // Wiederholen, falls Zahl schon gezogen wurde
            gezogen[zahl] = 1;
            ziehung[j] = zahl;
        }

        // Vergleich mit Tipp
        for (j = 0; j < Partei; j++) {
            for (int k = 0; k < Partei; k++) {
                if (ziehung[j] == tipp[k]) {
                    treffer++;
                }
            }
        }

        // Treffer speichern, falls 3 oder mehr Übereinstimmungen
        if (treffer >= 3) {
            statistik[treffer]++;
        }
    }

    // Ergebnis ausgeben
    printf("\nIn %d Ziehungen wurden folgende Treffer gefunden:\n", anzahlZiehungen);
    for (i = 3; i <= 6; i++) {
        double prozent = (statistik[i] / (double)anzahlZiehungen) * 100;
        printf("%d mal %d Richtige (%.2f%% Treffer)\n", statistik[i], i, prozent);
    }

    return 0;
}
