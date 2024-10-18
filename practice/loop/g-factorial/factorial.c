#include<stdio.h>
int main (){
    int n, fact ; 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &fact);
        long long int factorial=1;
        for (int j=1;j<=fact;j++){
            factorial=factorial*j;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}
