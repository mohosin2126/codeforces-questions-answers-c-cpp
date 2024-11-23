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

    int x;
    scanf("%d", &x);
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d", i);
            found = 1;
            break;
        }
    }

    if (found == -1)
    {
        printf("-1");
    }

    return 0;
}
