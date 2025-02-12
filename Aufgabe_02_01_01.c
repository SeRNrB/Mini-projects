#include <stdio.h>

int main (void) 
{
    char weiter;

    do {
        printf("Hallo\n");
        printf("Wollen Sie, dass ein weiteres mal Hallo ausgeben wird? j? \n");
        scanf(" %c", &weiter); 
    }
    while (weiter == 'j'); 

    printf("Dann gibt es eben keine weitere Begrüßung mahr ... und tschööööööö!\n");
    return 0;
}