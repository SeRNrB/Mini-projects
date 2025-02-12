#include<stdio.h>


int main()
{

    int userAlter = 0;

    printf("Geben Sie bitte Ihr Alter ein /n");
    scanf(" %d", &userAlter );

    if(userAlter<=17)
{
    printf("In Deutschland gelten Sie noch nicht als volljaerig");
}
else
{
    printf("In Deutschland gelten Sie als volljaerig");
}

return  0;


}