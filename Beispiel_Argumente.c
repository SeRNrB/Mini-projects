
// Ausflug: Eingabeargumente für main()
//
// Einfache Funktion, die die Anzahl der eingabeargumente für main() liest 
// und dann alle übergebenen Argumente auf der Konsole ausgibt.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("Anzahl der Argumente: %d\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
