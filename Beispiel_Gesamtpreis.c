// Das Programm fragt zu Beginn zwei Floatzahlen (Einzelpreis und Prozentsatz des Rabatts) sowie eine Integerzahl (Stückzahl) ab. Anschließend wird die folgende Funktion gestartet:
// Name: 	gesamtpreis
// Übergabewerte: 	Einzelpreis, Rabatt, Stückzahl
// Funktionalität: 	Ausgabe: „Der Gesamtpreis beläuft sich auf …“
// (Der Platzhalter “…“ wird natürlich mit dem entsprechenden Rechenergebnis gefüllt)

#include <stdio.h>

// Funktion zur Berechnung des Gesamtpreises
// einzeilpreis: Einzelpreis des Produkts
// rabatt: Rabatt in Prozent
// stueckzahl: Anzahl der Produkte
// return: Gesamtpreis
void gesamtpreis(float einzeilpreis, float rabatt, int stueckzahl) 
{
    float gesamtpreis = (einzeilpreis * stueckzahl) - (einzeilpreis*stueckzahl/rabatt);
    printf("Der Gesamtpreis beläuft sich auf %.2f\n", gesamtpreis);
}

int main() {
    float einzeilpreis, rabatt;
    int stueckzahl;

    printf("Bitte geben Sie den Einzelpreis ein: ");
    scanf("%f", &einzeilpreis);
    printf("Bitte geben Sie den Rabatt ein: ");
    scanf("%f", &rabatt);
    printf("Bitte geben Sie die Stückzahl ein: ");
    scanf("%d", &stueckzahl);

    gesamtpreis(einzeilpreis, rabatt, stueckzahl);

    return 0;
}
