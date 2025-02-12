# include<stdio.h>

void meinLiebling(char b)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%c",b);
    }
}

int main()
{
    char b;
    printf("Geben Sie bitte Ihren Lieblingsbuchstaben ein: ");
    scanf("%c",&b);
    meinLiebling(b);
    printf("\nFeierabend!");
    return(0);
}
