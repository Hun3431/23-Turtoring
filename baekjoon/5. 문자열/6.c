/*  문제번호 : 10809
    제목 : 알파벳 찾기  */
    
#include <stdio.h>

char str[100];
int index[26];

int main() {
    int len;
    
    scanf("%s", str);
    
    // 알파벳 배열 초기화
    for (int i = 0; i < 26; index[i ++] = -1);
    // 문자열 길이 확인
    for (len = 0; str[len] != 0; len ++);
    
    for (int i = 0; i < len; i ++ ){
        int num = str[i] - 97;
        if (index[num] == -1)
            index[num] = i;
    }
    for (int i = 0; i < 26; i ++) {
        printf("%d ", index[i]);
    }
    
    return 0;
}
