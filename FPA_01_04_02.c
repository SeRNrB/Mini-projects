#include <stdio.h>
 
int main(void)
{
    char erstesZeichen;
    char zweitesZeichen;
 
    printf("Geben Sie bitte ein beliebiges Zeichen ein : ");
    scanf(" %c", &erstesZeichen);
    fflush(stdin);
    printf("Geben Sie bitte nocheimal das SELBE Zeichen ein : ");
    scanf(" %c", &zweitesZeichen);
 
    if ("%c" == "%c", erstesZeichen, zweitesZeichen)
    {
        printf("Hervorragend! Sie scheinen mir ein echter Zeichen-Experte zu sein!\n");
    }
    else
    {
        printf("Sind Sie sicher, dass %c und %c identische Zeichen sind?\n", erstesZeichen, zweitesZeichen);
    }
 
    printf("Das Programm endet nun!");
}