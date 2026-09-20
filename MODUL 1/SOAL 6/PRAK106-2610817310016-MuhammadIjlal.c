#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    int is_equal = (a == b);
    int is_greater = (b > c);
    int is_not_equal = (a != c);

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", is_equal);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", is_greater);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", is_not_equal);

    return 0;
}