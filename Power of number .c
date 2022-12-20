#include <stdio.h>
#include<conio.h>
void main() {
    int base, exp;
    long value = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %ld", result);
    getch();
}
