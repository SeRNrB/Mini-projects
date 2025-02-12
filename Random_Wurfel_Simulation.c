#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    char weiter;
    srand(time(NULL));
    do
    {
    int wurf = (rand() % 6) + 1; // Zufallszahl zwischen 1 und 6
    printf("Würfel zeigt: %d\n", wurf);
    printf("Noch ein Mal rechnen? j? \n");
    scanf(" %c", &weiter); 
    } 
    while (weiter == 'j' || weiter == 'J');
    
    return 0;
}