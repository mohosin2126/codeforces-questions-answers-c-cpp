#include <stdio.h>
int main (){
 int n, year=365,day=30,years,months,days;

scanf("%d",&n);
years=n/year;
months=(n%year)/day;
days=(n%year)%day;

printf("%d years\n",years);
printf("%d months\n",months);
printf("%d days\n",days);

    return 0;
}