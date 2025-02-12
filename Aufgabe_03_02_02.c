#include <stdio.h>

// Funktion zur Berechnung von x^n
float x_hoch_n(float x, int n) {
    float ergebnis = 1.0;

    for (int i = 0; i < n; i++) {
        ergebnis *= x;
    }

    return ergebnis;
}

int main() {
    float x;
    int n;

    printf("Geben Sie eine Float-Zahl x ein: ");
    scanf("%f", &x);

    do {
        printf("Geben Sie einen nicht-negativen Integer n ein: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Fehler: n darf nicht negativ sein! Bitte erneut eingeben.\n");
        }
    } while (n < 0);

    // Funktionsaufruf und Ausgabe des Ergebnisses
    float ergebnis = x_hoch_n(x, n);
    printf("%.2f hoch %d = %.2f\n", x, n, ergebnis);

    return 0;
}


/*
Aufgabe_03_02_02



Das Programm fragt zunächst eine Float-Zahl x und einen (nicht-negativen) Integer n ab. 
Anschließend wird die unten erläuterte Funktion aufgerufen. 
Nachdem die Funktion abgearbeitet wurde, soll ihr Rückgabewert im Hauptprogramm abgespeichert und ausgegeben werden. 
Danach endet das Programm. 

Zur Funktion:
Name:	x_hoch_n
Übergabewerte:	Float x und Integer n
Funktionalität:	berechnet das Ergebnis aus „x hoch n“
Rückgabewert:	das berechnete Ergebnis

*/