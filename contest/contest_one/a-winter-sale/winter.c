#include <stdio.h>

int main()
{
    double X, P, price;
    scanf("%lf %lf", &X, &P);
    price = P / (1 - X / 100.0);
    printf("%.2lf\n", price);
    return 0;
}
