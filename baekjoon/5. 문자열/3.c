/*  문제번호 : 9086
    제목 : 문자열  */
    
#include <stdio.h>

char str[1000];

int main() {
    int test;
    scanf("%d", &test);
    while(test--){
        int i;
        
        scanf("%s", str);
        for(i = 0; str[i] != 0; i++);
        printf("%c%c\n", str[0], str[i-1]);
    }
    return 0;
}
