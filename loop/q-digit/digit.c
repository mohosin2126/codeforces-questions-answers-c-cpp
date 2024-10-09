#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T); 
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            printf("0\n");
            continue;
        }
        
    
        int digits[10]; 
        int count = 0; 
        while (N > 0) {
            digits[count++] = N % 10; 
            N = N /10;              
        }
        
        for (int j = 0; j < count; j++) {
            if (j > 0) printf(" ");
            printf("%d", digits[j]);
        }
        printf("\n"); 
    }
    return 0;
}
