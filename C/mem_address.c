#include <stdio.h>

int main() {
    int a = 1001;
    printf("nilai a = %d\n", a);
    int b = a;

    printf("nilai b = %d\n", b);
    printf("%p\n", &a);
    printf("%p\n", &b);
    // berbeda dengan mem address python, ternyata variable b, hanya mengambil nilai dari variable a, dan membuat mem address sendiri

    /* experiment kedua */
    b = 100;
    printf("\nnilai a = %d\n", a);
    printf("nilai baru b = %d\n", b);

    /* experiment ketiga, penggunaan pointer */
    printf("experiment ketiga, pointer\n");
    int c = 400;
    int *d = &c;

    // mem address nya tetap beda
    printf("%p\n", &c);
    printf("%p\n", &d);

    printf("nilai dari c = %d\n", c);
    printf("nilai dari d = %d\n", *d);

    *d = 300;
    printf("nilai baru dari c = %d\n", c);
    printf("nilai baru dari d = %d\n", *d);
    

    return 0;
}