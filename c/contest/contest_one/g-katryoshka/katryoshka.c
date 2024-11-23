#include <stdio.h>
 
int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
 
    long long result = 0;
 
    while (n > 0 && k > 0) {
        if (n >= 2 && m >= 1 && k >= 1) {
            n -= 2;
            m -= 1;
            k -= 1;
            result++;
        } else if (n >= 1 && m >= 1 && k >= 1) {
           n -= 1;
            m -= 1;
            k -= 1;
            result++;
        } else if (n >= 2 && k >= 1) {
            n -= 2;
            k -= 1;
            result++;
        } else {
           
            break;
        }
    }
 
    printf("%lld\n", result);
    return 0;
}