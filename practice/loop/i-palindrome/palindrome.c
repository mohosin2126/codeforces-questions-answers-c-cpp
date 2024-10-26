#include <stdio.h>

int main() {
    long long int n, reversed = 0, original;
    int last_digit;
    scanf("%lld", &n);
    original = n;  

    while (n > 0) {
        last_digit = n % 10; 
        reversed = reversed * 10 + last_digit;  
        n = n / 10;  
    }
    
    printf("%lld\n", reversed);
    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
