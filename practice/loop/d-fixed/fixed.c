#include <stdio.h>
int main()
{
    long long int n;
    while (scanf("%lld", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}