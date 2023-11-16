#include <stdio.h>

int main() {
    int banana, apple;
    const int banana_price = 4000; const int apple_price = 3000;
    int income_price;
    int banana_sold, apple_sold;
    
    printf("바나나의 개수를 입력하세요: ");
    scanf("%d", &banana);
    
    printf("사과의 개수를 입력하세요: ");
    scanf("%d", &apple);
    
    printf("팔린 바나나의 개수를 입력하세요: ");
    scanf("%d", &banana_sold);
    
    printf("팔린 사과의 개수를 입력하세요: ");
    scanf("%d", &apple_sold);
    
    income_price = banana_sold * banana_price + apple_sold * apple_price; 
    printf("총 가격은 %d원입니다.\n", income_price);
    printf("남은 바나나의 개수는 %d개이고, 남은 사과의 개수는 %d개입니다.\n", banana - banana_sold, apple - apple_sold);

    return 0;
}