//Serhii Nerubashchenko
#include <stdio.h>

int main() {
    int summe = 0, eingabe;

    while (1) {
        printf("Geben Sie bitte die Summe aller bisher von Ihnen in diesem Programm eingegebenen (ganzen) Zahlen ein: %d\n", summe);
        scanf("%d", &eingabe);

        if (eingabe == summe) {
            printf("Genau! .... Auf Wiedersehen!\n");
            break;
        }

        summe += eingabe;
    }

    return 0;
}
