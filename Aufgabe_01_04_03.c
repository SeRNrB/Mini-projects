#include <stdio.h>
#include <windows.h>

int main()

{
    system("chcp 1252");
    system("cls");

    char Auswahl1, Auswahl2; 
    int Ausgabe;

    printf("Bitte waelen Sie einen Buchstaben: ");
    scanf(" %c", &Auswahl1);
    fflush(stdin);
    printf("Bitte waelen Sie einen Buchstaben: ");
    scanf(" %c", &Auswahl2);
    fflush(stdin);
    printf("Waelen Sie bitte aus... \n (1)fuer Ausgabe nebeneinander \n (2) fuer Ausgabe uebereinander");
    scanf(" %d", &Ausgabe);

    if (Ausgabe = "1")
    {
        printf("Ausgabe: %c %c",Auswahl1,Auswahl2);
    }
    else
    {
        printf("Ausgabe: \n %c \n %c",Auswahl1,Auswahl2);
    }
return 0;
}    