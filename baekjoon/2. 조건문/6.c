/*  문제번호 : 2525
    제목 : 오븐 시계  */

#include <stdio.h>

int main()
{
    int hour, minute, time;

    scanf("%d %d %d", &hour, &minute, &time);
    minute += time;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
    printf("%d %d", hour, minute);
    return 0;
}