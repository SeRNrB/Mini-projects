//FPA_02_03_01  Serhii Nerubashchenko. 3 Versionen

//Var 1  for()-Schleife

#include <stdio.h>

int main() {
    int max;
    
    printf("Geben Sie bitte das Maximum ein: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++) {
        printf("%d ", i);
    }

    printf("\nProgramm endet nun.\n");
    return 0;
}
