#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    
    double x, y, z;
    double t1, t2;
    double w;

    //Ввод данных
    printf("Введите x, y, z:\n");
    scanf_s("%lf %lf %lf", &x, &y, &z);
    if (atan(x) + atan(z) == 0) {
        printf("error\n");
        return 0;
    }
    if (pow(x, 6) + pow(log(y), 2) < 0) {
        printf("error\n");
        return 0;
    }
    if (y <= 0) {
        printf("error\n");
        return 0;
    }

    t1 = (exp(fabs(x-y))*(pow(fabs(x-y), x+y))) / (atan(x)+atan(z));
    t2 = (pow((pow(x, 6) + pow(log(y), 2)), 1 / 3));
    w = t1 + t2;

    //Вывод ответа
    printf("w = %lg\n", w);

    printf("Введите число:\n");

    int digit;

    scanf_s("%d", &digit);
    switch (digit) {
    case 1: case 2: case 3: 
        printf("Result: 2");
        break;
    case 4:
        printf("Result: 3");
        break;
    case 5:
        printf("Result: 4");
        break;
    default:
        printf("Result: 1");  
    }
    return 0;
}

