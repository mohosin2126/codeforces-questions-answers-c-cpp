#include <stdio.h>

int main() {
    long long int a, b;
    char op;
    scanf("%lld %c %lld", &a, &op, &b);

    if (op == '+') {
        printf("%lld\n", a + b);  
    } 
    else if (op == '-') {
        printf("%lld\n", a - b); 
    } 
    else if (op == '*') {
        printf("%lld\n", a * b); 
    } 
    else if (op == '/') {
        printf("%lld\n", a / b); 
    }

    return 0;
}
