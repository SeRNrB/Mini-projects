//FPA_02_03_01  Serhii Nerubashchenko. 3 Versionen
//Var 3 do while Schleife


#include <stdio.h>

int main() {
    int max, i = 1;
    
    printf("Geben Sie bitte das Maximum ein: ");
    scanf("%d", &max);

    if (max > 0) {
        do {
            printf("%d ", i);
            i++;
        } while (i <= max);
    }

    printf("\nProgramm endet nun.\n");
    return 0;
}