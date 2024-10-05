#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Find and print the minimum number
    if (a <= b && a <= c) {
        printf("%d ", a);
    } else if (b <= a && b <= c) {
        printf("%d ", b);
    } else {
        printf("%d ", c);
    }

    // Find and print the maximum number
    if (a >= b && a >= c) {
        printf("%d", a);
    } else if (b >= a && b >= c) {
        printf("%d", b);
    } else {
        printf("%d", c);
    }

    return 0;
}
