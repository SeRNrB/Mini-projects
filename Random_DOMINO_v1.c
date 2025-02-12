#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
 
// Funktion zum Setzen der Konsolentextfarbe
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
 
// Funktion zum Anzeigen von zwei Würfeln nebeneinander
void printWuerfelNebeneinander(int zahl1, int zahl2) {
    const char* wuerfel[6][5] = {
        {"┌─────┐", "│     │", "│  •  │", "│     │", "└─────┘"},
        {"┌─────┐", "│ •   │", "│     │", "│   • │", "└─────┘"},
        {"┌─────┐", "│ •   │", "│  •  │", "│   • │", "└─────┘"},
        {"┌─────┐", "│ • • │", "│     │", "│ • • │", "└─────┘"},
        {"┌─────┐", "│ • • │", "│  •  │", "│ • • │", "└─────┘"},
        {"┌─────┐", "│ • • │", "│ • • │", "│ • • │", "└─────┘"}
    };
 
    for (int i = 0; i < 5; i++) {
        printf("%s  %s\n", wuerfel[zahl1 - 1][i], wuerfel[zahl2 - 1][i]);
    }
}
 
int main(void) {
    // Löscht den Konsolenbildschirm
    system("cls");
 
    // Setzt die Codepage auf UTF-8
    system("chcp 65001 > nul");
 
    srand(time(NULL));
 
    int anzahl_durchlaeufe = 100;
    int identische_ergebnisse = 0;
 
    for (int i = 0; i < anzahl_durchlaeufe; i++) {
        int wuerfel1 = rand() % 6 + 1;
        int wuerfel2 = rand() % 6 + 1;
 
        // Setzt eine zufällige Farbe für die Würfel
        setColor(rand() % 15 + 1);
 
        // Zeige die Würfel nebeneinander an
        printf("Wurf %d:\n", i + 1);
        printWuerfelNebeneinander(wuerfel1, wuerfel2);
 
        if (wuerfel1 == wuerfel2) {
            identische_ergebnisse++;
        }
 
        // Kurze Pause zwischen den Würfen
        Sleep(200);
    }
 
    setColor(2);
    printf("Anzahl der identischen Ergebnisse: %d\n", identische_ergebnisse);
 
    // Setzen Sie die Farbe zurück auf die Standardfarbe
    setColor(7);
 
    printf("\n\n");
    system("pause");
    return 0;
}