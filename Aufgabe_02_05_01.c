// Aufgabe_02_05_01

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[5];  // Array mit 5 Elementen
    int i, zuf;

    // seed
    srand(time(NULL));

    // Fülle das Array mit Zufallszahlen zwischen 1 und 100
    for (i = 0; i < 5; i++) {
        arr[i] = rand() % 100 + 1;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Zufallszahl zwischen 0 und 4 für Index wählen
    zuf = rand() % 5;

    // Ausgabe des zufällig gewählten Array-Werts
    printf("arr[%d] = %d\n", zuf, arr[zuf]);

    return 0;
}
