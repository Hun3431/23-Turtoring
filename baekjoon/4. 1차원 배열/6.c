/*  문제번호 : 10813
    제목 : 공 바꾸기  */
    
#include <stdio.h>

int main() {
    int n, m;
    int arr[100] = { 0 };
    
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i ++)
        arr[i] = i + 1;
    for(int x = 0; x < m; x ++) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--;
        j--;
        int box = arr[i];
        arr[i] = arr[j];
        arr[j] = box;
    }
    for (int i = 0; i < n; i ++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
