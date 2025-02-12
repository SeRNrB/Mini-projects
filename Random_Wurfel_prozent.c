#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define durchlaufen 5000
#define minW 1
#define maxW 6

// Funktion zur Erzeugung einer Zufallszahl zwischen min und max
int zufallszahl(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

int main() {
    int ergebniss = 0;

    srand(time(NULL));

    for (int i = 0; i < durchlaufen; i++) 
    {
        int wuerfel1 = zufallszahl(minW, maxW);
        int wuerfel2 = zufallszahl(minW, maxW);

        if (wuerfel1 == wuerfel2) {
            ergebniss++;
        }
    }
    double prozent = (ergebniss / (double)durchlaufen) * 100.0;

    printf("Aus %d Durchläufen waren %d Ergebnisse identisch.\n", durchlaufen, ergebniss);
    printf("Das entspricht %.2f Prozent aller Durchläufe.\n", prozent);

    return 0;
}
