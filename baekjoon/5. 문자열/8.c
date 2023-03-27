/*  문제번호 : 1152
    제목 : 단어의 개수  */
    
#include <stdio.h>

int main() {
    int num = 0;
    
    char w, c;
    scanf("%c", &w);
    
    while(1) {
        c = w;
        scanf("%c", &w);
        if(w == '\n'){
            if(c == ' ')
                num --;
            break;
        } else if(w == ' '){
            num ++;
        }
    }
    printf("%d", num + 1);
    return 0;
}
