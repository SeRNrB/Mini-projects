//FPA_02_03_01  Serhii Nerubashchenko. 3 Versionen

//Var 2 while()-Schleife

#include <stdio.h>

int main() {
    int max, i = 1;
    
    printf("Geben Sie bitte das Maximum ein: ");
    scanf("%d", &max);

    while (i <= max) {
        printf("%d ", i);
        i++;
    }

    printf("\nProgramm endet nun.\n");
    return 0;
}