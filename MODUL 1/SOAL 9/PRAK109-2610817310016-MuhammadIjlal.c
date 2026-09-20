#include <stdio.h>

int main() {
    int yz_army = 958730;
    int heroes = 5;

    int army_per_hero = yz_army / heroes;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", yz_army);
    printf("Jumlah pahlawan = %d\n", heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", army_per_hero);

    return 0;
}