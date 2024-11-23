#include <stdio.h>

int main()
{
    char s;
    int n,m;
    scanf(" %c", &s);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}
