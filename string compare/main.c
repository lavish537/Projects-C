#include<stdio.h>
#include<string.h>
int main()
{
    char a[10], b[10];
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);

    if( strcmp(a,b) == 0 )
    {
        printf("Entered strings are equal.");
        return 0;
    }
    else
    {
        printf("Entered strings are not equal.\n");
        return 0;
    }    
}
