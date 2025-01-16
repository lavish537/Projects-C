#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,result=0,rem;
    scanf("%d",&n);
    int num=n;
    while(n!=0)
    {
        rem=n%10;
        result=result*10+rem;
        n/=10;
    }
    if (n==result)
    {
        printf("%d is a palindrome number");
    }
    printf("reverse of %d is %d",num,result);
    return 0;
}
