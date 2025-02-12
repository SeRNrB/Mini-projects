#include <stdio.h>

int main() {
    int geheimnummer, bestaetigung;

    do {
        printf("Neue Geheimnummer eingeben: ");
        scanf("%d", &geheimnummer);

        do {
            printf("Bitte erneut eingeben zur Bestätigung: ");
            scanf("%d", &bestaetigung);

            if (bestaetigung != geheimnummer) {
                printf("Fehler! Die Eingaben stimmen nicht überein.\n");
            }
        } while (bestaetigung != geheimnummer);

        printf("Geheimnummer erfolgreich gesetzt: %d\n", geheimnummer);
        return 0;

    } while (1);
}
