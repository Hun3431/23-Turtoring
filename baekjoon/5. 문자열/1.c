/*  문제번호 : 27866
    제목 : 문자와 문자열  */
    
#include <stdio.h>

char str[1000];

int main() {
    int num;
    
    scanf("%s", str);
    scanf("%d", &num);
    
    printf("%c", str[num-1]);
    return 0;
}
