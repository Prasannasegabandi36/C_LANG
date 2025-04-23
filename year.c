#include<stdio.h>
int main(void) {
   int a, years,weeks,days;
   printf("Enter the number of days: ");
   scanf("%d",&a);
   years = a/365;
   weeks=(a%365)/7;
   days=a-(years*365)-(weeks*7);
   printf("Years: %dWeeks: %dDays: %d\n",years,weeks,days);
   return 0;
}
