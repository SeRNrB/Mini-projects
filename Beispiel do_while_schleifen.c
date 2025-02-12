//do while 
#include <stdio.h>

int main ()
{
    int x;
do
{
    printf("gib ein Zahl\n");
    scanf("%d", &x);
    fflush(stdin);

    if(x<10)
    {
        printf("Richtig!");
    }
  
} while (x>=10);
return 0;
}


/* #include <stdio.h>

int main() {
    int number;

    do {
        printf("Gib eine Zahl <10: ");
        scanf("%d", &number);

        if (number >= 10) {
            printf("He he:) Try again.\n");
        }
    } while (number >= 10);  
    printf("Prima!\n");

    return 0;
}
*/