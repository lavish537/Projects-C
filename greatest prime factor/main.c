#include <stdio.h>
#include <stdlib.h>
int primenum(int n){
    int a,c;
    for(a=1;a<=sqrt(n);a++){
        if (a%n==0){
            c=1;
        }
        else{
            c=0;
        }
    }
    return c;
}

int main()
{
    int j,k, final_ans=1,temp;
    scanf("%d",&k);
    for(j=k;j>=2;j--){
        if(k%j && primenum(j)==0){
            temp=j;
            if (temp>final_ans){
                final_ans=temp;
            }
        }
    }
    printf("%d",final_ans);
    return 0;
}
