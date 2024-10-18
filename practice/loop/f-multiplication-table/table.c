#include<stdio.h>
int main (){
long long int n;
scanf("%lld",&n);
for(int i=1;i<=12;i++){
printf("%lld * %d = %lld\n",n,i,n*i);

}

    return 0;
}