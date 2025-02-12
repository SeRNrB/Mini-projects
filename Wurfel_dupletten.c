// Programm: Würfel-Dupletten
// Autor: Thomas Krautter
// Datum: 06.02.2025
// Zweck: Demonstration für die Erzeugung von Zufallswerten

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	int w1,w2,      // Errechneter Zufallszahl von zwei Würfeln   
    loop = 5000,    // Anzahl der Durchläufe
    min = 1,        // Minimalwert
    max = 6,        // Maximalwert, z.B. 6 für einen Würfel, 49 für Lotto, etc.
    ident =  0;     // Anzahl der Dupletten
    
    // Seed setzen:
    srand(time(NULL));

    // Zufallszahlen generieren:
    for (int i = 0; i < loop; ++i)
    {
        // Würfelzahlen zwischen 1 und 6 generieren:
	    w1 = rand() % max + min;
	    w2 = rand() % max + min;
        // Vergleichen
        if (w1 == w2)
        {
            ident++;
        }
    }
    // Ausgabe:
	printf("Aus %d Durchläufen waren %d Ergebnisse identisch.\n",loop,ident);  
    printf("Das entspricht %d Prozent aller Ergebnisse.\n",ident*100/loop); 
    // Rückgabewert:
    return(0);
}
