/*  문제번호 : 2675
    제목 : 문자열 반복  */
    
#include <stdio.h>

char str[20];
int main() {
    int testcase;
    
    scanf("%d", &testcase);
    while(testcase--) {
        int cycle, len = 0;
        scanf("%d", &cycle);
        scanf("%s", str);
        for(len = 0; str[len] != 0; len ++);
        for(int i = 0; i < len; i ++) {
            for(int j = 0; j < cycle; j ++) {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
