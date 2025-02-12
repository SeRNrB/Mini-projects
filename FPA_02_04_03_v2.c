# include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int min , max, randomNum;
    srand(time(NULL));
   while (min != max){
        printf("Unterer Startwert: \n");
        scanf("%d",&min);
        printf("Oberer Startwert: \n");
        scanf("%d", &max);
        randomNum = rand() %(max - min + 1)+min;
        printf("es werden neue Werte zwischen %d und %d ausgelost: %d\n",min,max,randomNum);
        if (min == max)
        {
            printf("Unterer und oberer Grenze ist identisch -> Das Programm endet, auf Wiedersehen\n");
        }
    }
    return 0; 
}