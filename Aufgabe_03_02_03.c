#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufall(int a, int b) {
    return rand() % (b - a + 1) + a;
}

int main() {
    srand(time(NULL));

    int x;

    x = zufall(1, 100);
    printf("Zufallszahl: %d\n", x);

    while (x != 100) {
        x = zufall(x, 100);
        printf("Zufallszahl: %d\n", x);
    }

    printf("Ende des Programms.\n");
    return 0;
}
