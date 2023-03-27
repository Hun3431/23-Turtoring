/*  문제번호 : 11654
    제목 : 숫자의 합  */
    
#include <stdio.h>

char str[100];

int main() {
    int test, sum = 0;
    
    scanf("%d", &test);
    scanf("%s", str);
    
    for(int i = 0; i < test; sum += str[i++]-48);
    
    printf("%d", sum);
    return 0;
}
