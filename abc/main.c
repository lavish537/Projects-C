#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long primenum(long long n)
{
    long long l=1;
    while (n%2==0)
        {
            l=2;
            n/= 2;
        }
    for (int i=3;i*i<=n;i+=2)
        {
            while (n%i==0)
            {
                l=i;
                n/=i;
            }
        }
    if (n>2)
        {
            l=n;
        }
    return l;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int a0=0;a0<t;a0++)
    {
        long long n;
        printf("Enter an integer: ");
        scanf("%lld",&n);
        printf("Largest prime factor of %lld is %lld\n",n,primenum(n));
    }

    return 0;
}
