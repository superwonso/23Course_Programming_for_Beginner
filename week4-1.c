#include <stdio.h>

int main() {
    float x;
    printf("실수를 입력하세요: ");
    scanf("%f", &x);
    printf("입력한 실수는 %f입니다.\n", x);
    
    int ix = (int)x;
    printf("%f를 소수점 첫 째 자리에서 반올림하면 %d이다.", x, ix);

    return 0;
}