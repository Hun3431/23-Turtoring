/*  문제번호 : 2908
    제목 : 상수  */
    
#include <stdio.h>

int main() {
    int num1, num2;
    int result1, result2;
    
    scanf("%d %d", &num1, &num2);
    result1 = num1 / 100 + ((num1%100)/10)*10 + (num1%10)*100;
    result2 = num2 / 100 + ((num2%100)/10)*10 + (num2%10)*100;
    
    printf("%d", result1 > result2 ? result1 : result2 );
    
    return 0;
}
