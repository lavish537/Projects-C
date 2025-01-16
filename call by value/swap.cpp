#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swapping a=%d,y=%d\n",x,y);
}

int main()
{
    int a,b;
    printf("enter value of a,b:");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d,y=%d\n",a,b);
    swap(a,b);
}
