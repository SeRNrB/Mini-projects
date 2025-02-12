#include <stdio.h>

int main() {
    char c;
    int i, wahl;

    printf("Geben Sie ein Zeichen ein: ");
    scanf(" %c", &c);

    printf("Geben Sie eine positive ganze Zahl ein: ");
    scanf("%d", &i);

    /*if (i <= 0) {
        printf("Die Zahl muss positiv sein!\n");
        return 1;
    }*/

    printf("Waehlen Sie die Ausgabeart:\n");
    printf("(1) Zeichen nebeneinander\n");
    printf("(2) Zeichen untereinander\n");
    printf("Ihre Wahl: ");
    scanf("%d", &wahl);

 while (i-->0)
{
    printf("%c", c);
    if (wahl ==2) printf("\n");
}


 /*   if (wahl == 1)
    {
        for (int j = 0; j < i; j++) // Ausgabe nebeneinander
        {printf("%c", c);}
    } 
    else if (wahl == 2) { // Ausgabe untereinander
        for (int j = 0; j < i; j++) {
        printf("%c\n", c);
        }
    } 
 */   
    return 0;
}
