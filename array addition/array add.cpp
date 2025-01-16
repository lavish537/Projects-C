#include<stdio.h>

int main()
{
    int arr1[3]={1,2,3},arr2[3]={4,5,6},arr3[3];
    for (int i=0;i<=2;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    for (int i=0;i<=2;i++)
    {
        printf("%d ",arr3[i]);
    }
}