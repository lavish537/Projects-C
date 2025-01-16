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
        int n;
        scanf("%d",&n);
        int a,b,c;
        for (a=1;a<=n/3;a++)
        {
            for(b=a+1;b<=n/2;b++)
            {
                c=n-(a+b);
                if (a*a+b*b==c*c)
                {
                    printf("%d",a*b*c);
                }
            }
        }
    }
    return 0;
}
