#include <stdio.h>
#include <stdlib.h>
void swap(int x,int y);//function prototype/function declaration
int main()
{
    int a=88,b=77;
    swap(a,b);// function call here a,b are actual arguments/parameters
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int x,int y)//function defination here x,y are formal arguments/parameters
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d,y=%d\n",x,y);
}
