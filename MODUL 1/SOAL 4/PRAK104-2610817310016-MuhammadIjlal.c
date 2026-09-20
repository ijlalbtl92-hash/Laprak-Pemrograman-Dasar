#include <stdio.h>

int main() {
    int price_a = 400000;
    int price_b = 350000;

    int discount_a = price_a - (price_a * 13 / 100);
    int discount_b = price_b - (price_b * 21 / 100);

    printf("Harga sepatu A adalah %d\n", price_a);
    printf("Harga sepatu B adalah %d\n", price_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", discount_a);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d\n", discount_b);

    return 0;
}