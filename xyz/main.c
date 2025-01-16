#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        scanf("%lld",&n);
        long long primenum(long long l){
            long long a,c;
            for(a=1;a<=sqrt(l);a++)
            {
                if (l%a==0)
                {
                    c=1;
                 }
                 else
                 {
                    c=0;
                    }
             }
           return c;
         }

            long long j;

        for(j=1;j<=n;j++)
         {
             if(n%j==0 && primenum(j)==0)
                {
               printf("%lld \n",j);
              break;
              }
            }
     }

    return 0;
}
