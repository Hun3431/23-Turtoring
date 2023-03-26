/*  문제번호 : 2884
    제목 : 알람시계  */

#include <stdio.h>

int main()
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);
    minute -= 45;
    if (minute < 0)
    {
        minute += 60;
        hour--;
    }
    if (hour < 0)
        hour += 24;
    printf("%d %d", hour, minute);
    return 0;
}