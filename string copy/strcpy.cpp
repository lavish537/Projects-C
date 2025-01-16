#include<stdio.h>
#include<string.h>
int main()
{
    char a[10], b[10];
    printf("Enter the first string : ");
    gets(a);
    strcpy(b,a);
    puts(b);
}
