// Programm: Lotto_00
// Autor: Thomas Krautter
// Datum: 07.02.2025
// Zweck: Lotto-Simulation 6 aus 49 mit Wahrscheinlichkeitsberechnung

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array meinTipp mit 6 Elementen deklarieren - die Zahlen könnt Ihr selbst festlegen:
    int meinTipp[6] = {12,13,32,40,41,43};  
    int anzahlZiehungen = 10;
    // Jetzt müssen wir jeweils 6 Zahlen ziehen und mit dem Tipp vergleichen
    for (int n = 0; n < anzahlZiehungen; n++){
        // Array ziehung mit 6 Elementen deklarieren:
        int ziehung[6];
        // Ziehung durchführen
        for (int i = 0; i < 6; i++){
            ziehung[i] = rand()%49+1;
            // Prüfen, ob die Zahl schon gezogen wurde  
            for (int j = 0; j < i; j++){
                if (ziehung[i] == ziehung[j]){
                    i--;
                    break;
                }
            }    
        }
        // Vergleich der Ziehung mit dem Tipp
        int treffer = 0;
        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 6; j++){
                if (ziehung[i] == meinTipp[j]){
                    treffer++;
                }
            }
        }
        printf("Ziehung %d: ",n);
        for (int i = 0; i < 6; i++){
            printf("%02d ",ziehung[i]);
        }
        printf(" Treffer: %d\n",treffer);
    }        

    return(0);
}
