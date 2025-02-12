#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufall(int a, int b) 
    {
    return rand() % (b - a + 1) + a;
    }

char istVolljaehrig(int a) 
    {
    return (a >= 18) ? 'j' : 'n';
    }

int main() 
{
    srand(time(NULL));

    for (int i = 0; i < 100; i++) 
        {
        int zahl = zufall(1, 100); 
        char volljaehrig = istVolljaehrig(zahl); 
        //printf("Zahl: %d -> Volljährig? %c\n", zahl, volljaehrig);
        if (volljaehrig=='j')
        {
           printf("Zahl: %d -> Volljährig? Yes! Huhu %c \n", zahl /*,volljaehrig*/);
        }
        if (volljaehrig=='n')
        {
            printf("Zahl: %d -> Volljährig? %c. Du darfst nicht trinken :=) \n", zahl, volljaehrig);
        }
        }

    return 0;
}
