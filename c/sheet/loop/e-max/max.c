#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long max = -1;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (max < x)
        {
            max = x;
        }
    }

    printf("%lld", max);
    return 0;
}
