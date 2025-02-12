#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    int loop = 20;  // Anzahl der Durchläufe
    int min = 5;    // Minimalwert
    int max = 10;    // Maximalwert, z.B. 6 für einen Würfel, 49 für Lotto, etc.

    // Seed setzen
    srand(time(NULL));

    // Zufallszahlen generieren
    for (int i = 0; i < loop; i++)
    {
        x = (rand() % max) + min;
        // x = rand() % (max - min + 1) + min; // Richtige Zufallszahl-Berechnung  6-1+1+1
        printf("Die Variable x hat aktuell den Wert: %d\n", x);
    }

    // Rückgabewert
    return 0;
}
