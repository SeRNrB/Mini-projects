/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int x;
    srand((unsigned int)time(NULL)); 

    for (int i = 0; i < 10; i++) 
    {
        x = rand() % 100; // Zahl zwischen 0 und 99
        printf("Die Variable x hat aktuell den Wert: %d\n", x);
    }

    return 0;
}*/


# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    // Variable x deklarieren:
	int x;
    // Seed setzen:
    srand(time(NULL));

    // Zufallszahlen generieren:
    for (int i = 0; i++<10;)
    {
        // Zufallszahl zwischen 0 und 99 generieren:
	    x = rand() % 100;
	    printf("Die Variable x hat aktuell den Wert: %d\n",x);
    }
    // Rückgabewert:
    return(0);
}
