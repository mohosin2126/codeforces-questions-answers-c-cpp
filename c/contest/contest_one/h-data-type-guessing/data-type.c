#include <stdio.h>

int main()
{
    unsigned int n, k, a;
    unsigned long long result;
    scanf("%u %u %u", &n, &k, &a);
    result = (unsigned long long)n * (unsigned long long)k * (unsigned long long)a;
    if (result <= 2147483647ULL)
    {
        printf("int\n");
    }
    else
    {
        printf("long long\n");
    }

    return 0;
}
