#include <stdio.h>

int main() {
    int x,y,z,w,v = 0;
    printf("정수 5개를 입력하세요: ");
    scanf("%d %d %d %d %d", &x, &y, &z, &w, &v);
    int sum = 0;

    if ((x%2==0)||(x%3==0)) sum = sum + x;
    if ((y%2==0)||(y%3==0)) sum = sum + y;
    if ((z%2==0)||(z%3==0)) sum = sum + z;
    if ((w%2==0)||(w%3==0)) sum = sum + w;
    if ((v%2==0)||(v%3==0)) sum = sum + v;

    printf("5개의 정수 중 2 또는 3의 배수인 수의 합은 %d이다.\n", sum);

    return 0;
}