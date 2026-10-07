#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int a, b;
    int result;
    printf("¬ведите числа\n");
    scanf_s("%d", &a);
    printf("a = %d\n", a);
    scanf_s("%d", &b);
    printf("b = %d\n", b);
    printf("–езультат получает та комнда, чье число четное\n");
    result = (a % 2 == 0) * 1 + (b % 2 == 0) * 2;
    printf("’од получает команда %d\n", result);
    system("pause");
}
    








