//FPA_02_04_03
//Autor: S. Nerubashchenko
//Programm: 2 Zufallszahlen; Schleifenabfrage mit Wertevergleich, wenn Werte gleich Programm ende

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int min, max;           //variablen
    
    int rndmin, rndmax;     //zufallszahlen    
    srand(time(0));         //seed

    do{            
        printf("\nUnterer Wert: ");         //eingabe - min & max initiieren
        scanf("%d", &min);
        printf("Oberer Wert: ");
        scanf("%d", &max);
        printf("Es werden neu Werte zwischen %d und %d ausgelost\n", min, max);
    }while (min > max);
    
    do{                                     //Schleife bis min gleich max
        //Zufallszahlen rechnen
        rndmin =rand() % (max - min +1) +min;
        rndmax =rand() % (max - min +1) +min;        
        
        if(rndmin > rndmax){                
            int tauschmich = rndmin;
            rndmin = rndmax;
            rndmax = tauschmich;
        }
        printf("\nNeuer unterer Wert: %d", rndmin);     //Ausgabe
        printf("\nNeuerOberer Wert: %d", rndmax);

        if(rndmin != rndmax){             //Ausgabe nur solange min nicht gleich max ist
            printf("\nEs werden neu Werte zwischen %d und %d ausgeloest\n", rndmin, rndmax);
        }    
    }while(rndmin != rndmax);   //Bedingung für Schleife
    printf("\nUntere und obere Grenze ist identisch -> Das Programm endet, Auf Wiedersehen!\n");


    return 0;
}



        