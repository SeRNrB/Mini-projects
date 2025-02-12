//Aufgabe userAlterYN
#include <stdio.h>

int main() {
    int aktJahr = 0, GeburtsJahr = 0, userAlter = 0;
    char Postgeb = 0;

    // Eingabe der Werte
    printf("Aktuelles Jahr eingeben: ");
    scanf("%d", &aktJahr);
    fflush(stdin);

    printf("Geburtsjahr eingeben: ");
    scanf("%d", &GeburtsJahr);
    fflush(stdin);

    printf("Postgeburtstag bereits gehabt? (Y/N): ");
    scanf(" %c", &Postgeb);  // Leerzeichen vor %c, um Eingabeprobleme zu vermeiden

    // Berechnung des Alters
    if (Postgeb == 'Y' || Postgeb == 'y') 
    {
        userAlter = aktJahr - GeburtsJahr;
    } 
    else 
    {
        userAlter = aktJahr - GeburtsJahr - 1;
    }

    // Ausgabe des Alters
    printf("Ihr Alter: %d Jahre\n", userAlter);

    return 0;
}
