#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int x,y;
int loop=5000;
int min=1;
int max=6;
int gleich=0;
double prozent;

srand(time(0));

for (int i = 0; i < loop; i++)
{
    x = rand() % (max - min + 1) + min; // Würfel 1
    y = rand() % (max - min + 1) + min; // Würfel 2

    if (x == y) 
    {
        gleich++;
    }
}

 
prozent = ((double)gleich / loop) * 100.0;

printf("Aus %d Durchläufen waren %d Ergebnisse identisch.\n", loop, gleich);
printf("Das entspricht %.2f Prozent aller Durchläufe.\n", prozent);

return 0;
}