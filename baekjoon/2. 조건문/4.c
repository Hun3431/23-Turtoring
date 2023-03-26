/*  문제번호 : 14681
    제목 : 사분면 고르기  */

#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > 0)
    {
        if (y > 0)
            printf("1");
        else // y < 0
            printf("4");
    }
    else // x < 0
    {
        if (y > 0)
            printf("2");
        else // y < 0
            printf("3");
    }

    return 0;
}