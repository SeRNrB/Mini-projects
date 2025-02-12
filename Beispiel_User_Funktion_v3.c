#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generiereZufallszahl(int min, int max);

int main(int argc, char* argv[])
{
    srand(time(NULL));  // Initialisierung des Zufallszahlengenerators

    if (argc != 3)  // Korrektur des Vergleichsoperators
    {
        printf("Bitte genau 2 Argumente eingeben: Zahl(min) , Zahl(max)\n");
        return 1;
    }

    int zahl_min = atoi(argv[1]);
    int zahl_max = atoi(argv[2]);

    // Eingabevalidierung
    if (zahl_min > zahl_max) {
        printf("Fehler: min darf nicht größer als max sein.\n");
        return 1;
    }

    int zufallszahl = generiereZufallszahl(zahl_min, zahl_max);
    printf("Zufallszahl: %d\n", zufallszahl);

    return 0;
}

int generiereZufallszahl(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
