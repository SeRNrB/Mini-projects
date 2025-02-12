// Programm: Array_03
// Autor: Thomas Krautter
// Datum: 07.02.2025
// Zweck: Einführung in die Nutzung von Arrays mit variabler Länge

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
    // Seed setzen und zufälligen Zählerwert festlegen
    srand(time(NULL));
    int count = rand()%10+1;
    // Array userZahl mit count Elementen deklarieren:  
	int userZahl[count];
	
    printf("Wir starten das Programm mit %d Elementen:\n",count);

	for(i=0;i<count;i++)
	{
		printf("Geben Sie bitte eine ganze Zahl ein:");
		fflush(stdin);
		scanf("%d",&userZahl[i]); 
	}
	for(i=0;i<count;i++)
	{
		printf("Wert des Feldes mit Index %d: %d\n",i,userZahl[i]);
	}

    return(0);
}