//FachpraktischeAnwendung_01_05_01

#include<stdio.h>

int main()
{
    int Countdown;
    int Startzahl;

        printf("\n--------------------------------------------------\n");
    do{
        printf("\nGeben Sie bitte den Startwert ihres Countdowns ein!");
        printf("\n(Das System zaehlt dann runter bis auf 0, daraufhin startet die Mondrakete)");
        printf("\nIhre Eingabe:\t");
        scanf(" %d",&Startzahl);
        
        if(Startzahl<0){
            printf("\n\tDas kann ja wohl nicht Ihr Ernst sein, oder?");
            printf("\n----------------------nochmal!----------------------------\n");
        }
        else{
            Countdown = Startzahl;
            while (Countdown >= 0)
            {          
            printf("%d\n", Countdown);
            Countdown--;
            }
        }
    } 
    while (Startzahl < 0);
    
    printf("\nDie Rakete startet - Guten Flug!\n");
    printf("           ^\n");
    printf("          /^\\\n");
    printf("         /   \\\n");
    printf("        /     \\\n");
    printf("       /_______\\\n");
    printf("       |       |\n");
    printf("       |  NASA |\n");
    printf("       |       |\n");
    printf("       |_______|\n");
    printf("      /|_______|\\\n");
    printf("     / |       | \\\n");
    printf("    /  |       |  \\\n");
    printf("   /   |_______|   \\\n");
    printf("  /_________________\\\n");
    printf("       /       \\\n");
    printf("      /         \\\n");
    printf("     /___________\\\n");
    printf("\n--------------------------------------------------\n");
    return 0;
    
}