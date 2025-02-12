// for Schleife
#include <stdio.h>

int main() {
    int counter = 0;
    for ( counter = 0; counter < 10; counter++ ) { // Korrektur hier
        printf("Counter (b): %d\n", counter);
    }

    printf("Counter (a): %d\n", counter); // Wird 10 ausgeben

    return 0;
}