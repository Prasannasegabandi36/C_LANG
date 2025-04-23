#include<stdio.h>
void fun(int *ptr1, int *ptr2)
{
   int *temp;
   temp = ptr2;
   ptr1 = ptr2;
   ptr1 = temp;
}
int main()
{
   int w = 1, x = 2, y = 3, z = 4;
   fun(&w, &x);
   if(w < y)
      fun(&y, &z);
      fun(&w, &z);
   printf("%d",w);
}
