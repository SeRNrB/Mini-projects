// Programm: Array_01
// Autor: Thomas Krautter
// Datum: 07.02.2025
// Zweck: Einführung in die Nutzung von Arrays

# include<stdio.h>

int main()
{
	int i;
	int userZahl[5];  

	for(i=0;i<5;i++)
	{
		printf("Geben Sie bitte eine ganze Zahl ein:");
		fflush(stdin);
		scanf("%d",&userZahl[i]); 
	}
    
	for(i=0;i<5;i++)
	{
		printf("Wert des Feldes mit Index %d: %d\n",i,userZahl[i]);
	}

    return(0);
}