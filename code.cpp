#include "stdio.h"
#include "windows.h"
#include "math.h" 

using namespace std;

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#define M_PI           3.14
    float a, m, c, t;

    printf("Введіть значення m: ");
    scanf_s("%f", &m);
    printf("Введіть значення c: ");
    scanf_s("%f", &c);
    printf("Введіть значення t: ");
    scanf_s("%f", &t);
    printf("Hello world!");
}
