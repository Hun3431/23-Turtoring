/*  문제번호 : 2588
    제목 : 곱셈  */

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * ((b / 10) % 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b);
    return 0;
}