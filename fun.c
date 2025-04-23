#include<stdio.h>
void swap()
{
   int a,b,t;
   printf("Enter 2 numbers:");
   scanf("%d%d",&a,&b);
   t=a;
   a=b;
   b=t;
   printf("a=%d\n",a);
   printf("b=%d\n",b);
}
void main()
{
   void swap();
   swap();
}
