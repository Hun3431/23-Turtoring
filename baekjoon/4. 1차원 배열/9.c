/*  문제번호 : 10811
    제목 : 바구니 뒤집기  */
    
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
        int z = 0;
        for(int y = i; y <= i+((j-i)/2); y ++){
            int box = arr[y];
            arr[y] = arr[j-z];
            arr[j-z] = box;
            z++;
        }
    }
    for (int i = 0; i < n; i ++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
