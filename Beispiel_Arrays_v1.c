//Arrays in C

//int numbers[5] = {10, 20, 30, 40, 50};

/*
int numbers[5];
numbers[0] = 12;
numbers[1] = 34;
numbers[2] = 56;
numbers[3] = 78;
numbers[4] = 90;
*/

#include <stdio.h>

int main() {
    int numbers[3] = {5, 10, 15};

    printf("Первый элемент: %d\n", numbers[0]); // 5
    printf("Второй элемент: %d\n", numbers[1]); // 10
    printf("Третий элемент: %d\n", numbers[2]); // 15

    return 0;
}


// Перебор массива (цикл for)
// Чтобы обработать массив, обычно используют цикл for, который проходит по всем элементам.

#include <stdio.h>

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++) {
        printf("Элемент %d: %d\n", i, numbers[i]);
    }

    return 0;
}


//Ввод данных в массив
//Можно заполнить массив значениями от пользователя с помощью scanf().

#include <stdio.h>

int main() {
    int numbers[5];

    printf("Введите 5 чисел:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Вы ввели:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}


// Двумерные массивы (Матрицы)
// Массивы могут быть многомерными. Например, двумерный массив — это таблица (матрица).

#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

