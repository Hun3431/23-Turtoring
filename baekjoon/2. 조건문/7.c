/*  문제번호 : 2480
    제목 : 주사위 세개  */

#include <stdio.h>

int main()
{
    int a, b, c, money;

    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        money = 10000 + a * 1000;
    else
    {
        if (a == b)
            money = 1000 + a * 100;
        else if (b == c)
            money = 1000 + b * 100;
        else if (a == c)
            money = 1000 + c * 100;
        else
        {
            if(a < b) a = b; 
            if(a < c) a = c;
            money = a * 100;
        }
    }
    printf("%d", money);
    return 0;
}