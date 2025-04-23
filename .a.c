#include<stdio.h>
int main()
{
    char str[11] = "Mathematics", *ptr;
    int i;
    ptr = str;
    *(ptr+1) = 'A';
    *(ptr+6) = 'A';
    printf("%s",str);
}
