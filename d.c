#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50];
    fp = fopen("C:\\Users\\sai kumar\\Downloads\\files\\filesample.txt", "r");
    fgets(str,5,fp);
}
