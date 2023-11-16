#include <stdio.h>

int main() {
    int x;
    printf("시험 점수를 입력하세요: ");
    scanf("%d", &x);
    
    switch (x/10)
    {
    case 10:
        printf("A\n");
        break;
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }
    
    return 0;
}