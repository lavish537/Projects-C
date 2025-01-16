#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int primenum(long long n)
{
    int l=1;
    for (int i=2;i*i<=n;i++)
        {
            while (n%i==0 && n!=i)
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
int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        scanf("%lld",&n);
        printf("%d\n",primenum(n));
    }
    return 0;
}
