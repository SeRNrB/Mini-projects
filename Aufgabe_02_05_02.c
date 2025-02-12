#include <stdio.h>

int main() {
    char arrayA[5], arrayB[5];
    int i;

    // Eingabe der Zeichen für arrayA
    printf("Geben Sie 5 Zeichen ein:\n");
    for (i = 0; i < 5; i++) {
        printf("arrayA[%d]: ", i);
        scanf(" %c", &arrayA[i]);  
    }

    // Umkehrung der Reihenfolge in arrayB
    for (i = 0; i < 5; i++) {
        arrayB[i] = arrayA[4 - i];
    }

    // Ausgabe der Arrays
    printf("\nOriginales Array:\n");
    for (i = 0; i < 5; i++) {
        printf("arrayA[%d] = '%c'\n", i, arrayA[i]);
    }

    printf("\nUmgekehrtes Array:\n");
    for (i = 0; i < 5; i++) {
        printf("arrayB[%d] = '%c'\n", i, arrayB[i]);
    }

    return 0;
}
