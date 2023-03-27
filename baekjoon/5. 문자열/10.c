/*  문제번호 : 5622
    제목 : 다이얼  */
    
#include <stdio.h>

int main() {
    int time = 0;
    char str[15];
    
    scanf("%s", str);
    
    int len;
    for(len = 0; str[len] != 0; len ++);
    
    for(int i = 0; i < len; i ++) {
        int num = str[i] - 'A';
        if(num > 14) {
            if(num < 19) time += 8;
            else if(num < 22) time += 9;
            else time += 10;
        }
        else time += num/3 + 3;
    }
    
    printf("%d", time);
    return 0;
}
