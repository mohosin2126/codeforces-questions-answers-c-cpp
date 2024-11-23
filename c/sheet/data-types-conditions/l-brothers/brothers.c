#include <stdio.h>
#include <string.h> 
int main()
{
    char f1[50], s1[50];
    char f2[50], s2[50];
    
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    if (strcmp(s1, s2) == 0) 
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}
