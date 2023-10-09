#include <stdio.h>

void swap(int x ,int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10;
    int y = 5;

    swap(x, y);
    // variable nya beda linkungan boss, ya gak bisa di swaplah
    printf("ini x = %d\n", x);
    printf("ini y = %d\n", y);
    return 0;
}