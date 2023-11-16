#include <stdio.h>

int main() {
    int x,y,z;
    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &x, &y, &z);
    int max;
 
    if (x > y) {
        if (x > z) {
            max = x;
        } else {
            max = z;
        }
    } else {
        if (y > z) {
            max = y;
        } else {
            max = z;
        }
    }
 
    // 삼항연산자 풀이
    // max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    
    printf("가장 큰 수는 %d이다.\n", max);
    
    return 0;
}