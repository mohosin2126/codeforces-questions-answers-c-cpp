#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int lowestNumber = a[0];
    int index=1;
    for (int i = 0; i < n; i++)
    {
        if (lowestNumber > a[i])
        {
            lowestNumber = a[i];
            index=i+1;
        }
    }

    printf("%d %d", lowestNumber,index);

    return 0;
}