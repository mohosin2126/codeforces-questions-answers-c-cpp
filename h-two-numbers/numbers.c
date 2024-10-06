#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int x = floor((double)a / b);
    int y = ceil((double)a / b);
    int z = round((double)a / b);
    
    printf("floor %d / %d = %d\n", a, b, x);
    printf("ceil %d / %d = %d\n", a, b, y);
    printf("round %d / %d = %d\n", a, b, z);
    
    return 0;
}
