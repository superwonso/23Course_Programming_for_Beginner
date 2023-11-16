#include <stdio.h>

int main() {
    int apple, banana;
    const int apple_price = 3000; const int banana_price = 4000;
    int income_price; int apple_sold, banana_sold;
    
    printf("입고된 사과와 바나나의 개수를 입력하세요.");
    scanf("%d %d", &apple, &banana);
    
    printf("팔린 사과와 바나나의 개수를 입력하세요.");
    scanf("%d %d", &apple_sold, &banana_sold);
    
    if (apple_sold > apple || banana_sold > banana) {
        printf("입고된 과일의 개수보다 많이 팔 수 없습니다.");
        return 0;
    }

    income_price = (apple_sold * apple_price) + (banana_sold * banana_price * 0.9);
    printf("총 수입은 %d원입니다.\n", income_price);
    printf("남은 사과의 개수는 %d개이고, 남은 바나나의 개수는 %d개입니다.\n", apple - apple_sold, banana - banana_sold);
    
    return 0;
}