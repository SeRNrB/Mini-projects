
#include<stdio.h>
int suchemin(int a,int b)
{   int min;
    if(a>b){
        min=b;
    }
    else{
        min=a;  
    }
    return min;
}
int main()
        {
            int a,b;
            printf("Bitte geben Sie die erste Zahl ein: \n");
            scanf("%d",&a);
            printf("Bitte geben Sie die zweite Zahl ein: \n");
            scanf("%d",&b);

            printf("Das ermittelte Minimum ist %d",suchemin(a,b));
            return 0;

        }
