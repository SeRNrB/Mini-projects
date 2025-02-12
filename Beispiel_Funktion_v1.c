
// Aufgabe A_03_02_02:
// Das Programm fragt zunächst eine Float-Zahl x und einen (nicht-negativen) Integer n ab. 
// Anschließend wird die unten erläuterte Funktion aufgerufen. 
// Nachdem die Funktion abgearbeitet wurde, soll ihr Rückgabewert im Hauptprogramm abgespeichert und ausgegeben werden. 
// Danach endet das Programm. 

// Zur Funktion:
// Name:	x_hoch_n
// Übergabewerte:	Float x und Integer n
// Funktionalität:	berechnet das Ergebnis aus „x hoch n“
// Rückgabewert:	das berechnete Ergebnis
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x_hoch_n(float x, int n) {
    return pow(x, n);
}
void main() {
    float x;
    int n;
    printf("Bitte geben Sie eine Float-Zahl x ein: ");
    scanf("%f", &x);
    printf("Bitte geben Sie eine nicht-negative Integer-Zahl n ein: ");
    scanf("%d", &n);
    float ergebnis = x_hoch_n(x, n);
    printf("Das Ergebnis von %.2f hoch %d ist %.2f\n", x, n, ergebnis);
}
