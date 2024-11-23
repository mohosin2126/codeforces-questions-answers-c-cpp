#include <stdio.h>
int main()
{
    long long int n, m, first, second, sum;
    scanf("%lld %lld", &n, &m);

    first = n % 10;
    second = m % 10;
    sum = first + second;
    printf("%lld\n", sum);
    return 0;
}