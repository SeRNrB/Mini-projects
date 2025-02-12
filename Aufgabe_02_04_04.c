/*
Das Programm lost zunächst zwei Zahlen zwischen (beiderseits einschließlich) -100 und +100 aus. 
Anschließend wird vom User die Summe der beiden Zahlen abgefragt. 
Falls er richtig liegt, so erscheint „Glückwunsch“ auf der Konsole und das Programm endet. 
Falls er sich verrechnete, so wird eine Fehlermeldung und das korrekte Ergebnis ausgegeben und das Programm endet.*/

//Aufgabe_02_04_04
//Autor: S. Nerubashchenko

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
int x,y;
int summe,wahl=0;
srand(time(0));

x=rand() % 201-100;
y=rand() % 201-100;
summe=x+y;

printf("Was ist die Summe von %d und %d?\n",x,y);
fflush(stdin);
scanf(" %d",&wahl);

if (summe== wahl)
{
    printf("Glückwunsch!!\n");
    
}
else
printf("FALSCHHHHH!! Antwort ist:%d\n", summe);

return 0;
    
}