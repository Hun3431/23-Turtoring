/*  문제번호 : 9498
    제목 : 시험 성적  */

#include <stdio.h>

int main()
{
    int score;

    scanf("%d", &score);
    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");
    return 0;
}