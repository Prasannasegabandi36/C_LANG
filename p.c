#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    scanf("%d\n", &n);
    char* p = (char *)  calloc(n, sizeof(char));
    for(i=0;i<n;i++)
    {
        scanf("%c", p+i);
    }

    for(i=0;i<n;i++)
    {
        printf("%c",*(p+i));
    }
}
