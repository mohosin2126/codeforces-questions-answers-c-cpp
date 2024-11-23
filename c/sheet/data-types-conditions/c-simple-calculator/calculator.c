#include <stdio.h>
int main (){
long long int x,y,sum,multi,subs;
scanf("%lld %lld",&x,&y);
sum=x+y;
multi=x*y;
subs=x-y;
printf("%lld + %lld = %lld\n",x,y,sum);
printf("%lld * %lld = %lld\n",x,y,multi);
printf("%lld - %lld = %lld\n",x,y,subs);
return 0;
}