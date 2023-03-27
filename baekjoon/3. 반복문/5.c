/*  문제번호 : 25314
    제목 : 코딩은 체육과목 입니다  */
    
#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    n /= 4;
    for(int i = 0; i < n; i++)
        printf("long ");
    printf("int");
    return 0;
}
