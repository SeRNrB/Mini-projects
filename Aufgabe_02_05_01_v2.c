#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

int arr[5];
int i,zuf =0;
srand(time(0));


for(int i=0;i<5;i++)
{
    arr[i]=rand()%100+1;
    fflush(stdin);
    printf("arr[%d]: %d\n", i, arr[i]);
}
zuf=rand() %5;
printf("arr[%d] = %d\n", zuf, arr[zuf]);


return 0;
}