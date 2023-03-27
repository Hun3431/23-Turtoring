/*  문제번호 : 10810
    제목 : 공 넣기  */
    
#include <stdio.h>

int main() {
    int n, m;
    int arr[100] = { 0 };
    scanf("%d %d", &n, &m);
    for(int x = 0; x < m; x ++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for(int y = i - 1; y < j; y ++){
            arr[y] = k;
        }
    }
    for (int i = 0; i < n; i ++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
