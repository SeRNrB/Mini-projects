# include<stdio.h>
# include<stdlib.h>
#include <time.h>

int main()
{
	int x;
	srand(time(0));

	printf("Wir erzeugen jetzt Zufallszahlen zwischen 0 und %d\n",RAND_MAX);  //Dec
	printf("Wir erzeugen jetzt Zufallszahlen zwischen 0 und 0x%x\n",RAND_MAX); //Hexa

	x = rand();
	printf("Die Variable x hat aktuell den Hexadecimal Wert: %x\n",x); //hexadecimal Zahl
    printf("Die Variable x hat aktuell den Decimal Wert: %d\n",x); //decimal Zahl
    fflush(stdin);
    return(0);
}
