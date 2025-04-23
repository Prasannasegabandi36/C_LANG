#include<stdio.h>
void main()
{
//int i =3, j =5, *p = &i, *q = &j;
//printf("%d",7**p/(*q)+7);

    int *a = malloc(sizeof(int));
    *a = 5;
    free(a);
    printf("%d",*a);

}
