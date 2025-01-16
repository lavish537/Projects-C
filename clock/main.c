#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    for (int i=0;i<24;i++)
    {
        for (int j=0;j<60;j++)
        {
            for (int k=0;k<60;k++)
            {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%d:%d:%d",i,j,k);
                Sleep(1000);
                system("cls");
            }
        }
    }
    return 0;
}
