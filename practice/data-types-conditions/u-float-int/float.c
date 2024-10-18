#include <stdio.h>
int main()
{

    double n;
    scanf("%lf", &n);
    if (n == (int)n)
    {

        printf("int %d\n", (int)n);
    }
    else
    {
        int integerPart = (int)n;
        double floatPart = n - integerPart;
        printf("float %d %.3f\n", integerPart, floatPart );
    }

    return 0;
}