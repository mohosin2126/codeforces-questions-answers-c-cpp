#include<stdio.h>

int main() {
    int x, first_digit;
    scanf("%d", &x);
    first_digit = x / 1000; 
    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
