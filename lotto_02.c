// Programm: lotto_02
// Autor: Thomas Krautter
// Datum: 07.02.2025
// Zweck: Musterlösung für die Lotto-Aufgabe 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Array 'meinTipp' mit 6 Elementen deklarieren - die Zahlen könnt Ihr selbst festlegen:
const int meinTipp[6] = {12, 13, 32, 40, 41, 43};
// Array 'ergebnisse' mit 7 Elementen (Anzahl der Übereinstimmungen, 0-6 Richtige) deklarieren:
int ergebnisse[7] = {0, 0, 0, 0, 0, 0, 0};

//  main: 
//  Führt eine zuvor definierte Anzahl von Anzahl von Ziehungen durch,
//  vergleicht die Ziehung mit dem Tipp und zählt die Treffer.
//  Danach werden die Ergebnisse ausgegeben (Anzahl richtige Treffer und Trefferquote)
int main()
{
    // Die Anzahl der Ziehungen, die wir vornehmen wollen ...
    int anzahlZiehungen = 1000;

    // Seed setzen und zufälligen Zählerwert festlegen
    srand(time(NULL));

    // Ziehungen durchführen
    for (int n = 0; n < anzahlZiehungen; n++)
    {
        // Array ziehung mit 6 Elementen deklarieren:
        int ziehung[6];
        // Ziehung durchführen
        for (int i = 0; i < 6; i++)
        {
            ziehung[i] = rand() % 49 + 1;
            // Prüfen, ob die Zahl schon gezogen wurde
            for (int j = 0; j < i; j++)
            {
                // Falls die Zahl schon gezogen wurde Zähler i zurücksetzen,
                // und die Schleife unterbrechen, um die Zahl erneut zu ziehen
                if (ziehung[i] == ziehung[j])
                {
                    i--;
                    break;
                }
            }
        }
        // Vergleich der Ziehung mit dem Tipp
        int treffer = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (ziehung[i] == meinTipp[j])
                {
                    treffer++;
                }
                // Alternativ:
                // treffer += (ziehung[i] == meinTipp[j]);
            }
        }
        ergebnisse[treffer]++;
    }

    // Ausgabe der Ergebnisse
    printf("Aus %d Ziehungen wurden folgende Treffer gefunden\n", anzahlZiehungen);
    for (int i = 3; i <= 6; i++)
    {
        // Berechnung der Trefferquote in Prozent
        float prozent = (float)ergebnisse[i] / anzahlZiehungen * 100;
        // Ausgabe der Anzahl der richtigen Treffer und der Trefferquote
        printf("%6d mal %4d Richtige (%7.2f %% Treffer)\n", ergebnisse[i], i, prozent);
    }

    return (0);
}