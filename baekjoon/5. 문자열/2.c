/*  문제번호 : 2743
    제목 : 단어 길이 재기  */
    
#include <stdio.h>

char str[100];

int main() {
    int i;
    
    scanf("%s", str);
    for(i = 0; str[i] != 0; i++);
    printf("%d\n", i);
    return 0;
}
