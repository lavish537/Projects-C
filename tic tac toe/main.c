#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

bool win_condition(char a[3][3], char x)
{
    for (int i=0;i<3;i++)
        {
            if (a[i][0]==x&&a[i][1]==x&&a[i][2]==x)
                {
                return true;
                }
        }
        for (int j=0;j<3;j++)
        {
            if (a[0][j] == x && a[1][j] == x && a[2][j] == x)
            {
                return true;
            }
        }
        if ((a[0][0] == x && a[1][1] == x && a[2][2]==x)||(a[0][2] == x && a[1][1] == x && a[2][0]==x))
        {
            return true;
        }
        return false;
}
void check_validity(char a[3][3], char b)
{
    int i,j;

    do{

			printf("ENTER THE COORDINATE ");
			scanf("%d %d",&i,&j);
			if(a[i][j]=='x' || a[i][j]=='o')
			{
				printf("place already filled \n");
				check_validity(a[3][3],b)
			}
			else if (i>2 || j>2)
            {
                printf("invalid input");
            }
		}while(a[i][j]=='x' || a[i][j]=='o');
        a[i][j]=b;
}

void print_array(char a[3][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
	char z[3][3],A[10],B[10];

	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			z[a][b]='_';
		}
	}
	printf("ENTER THE NAME OF PLAYER 1 ");
	gets(A);
	printf("\nENTER THE NAME OF PLAYER 2 ");
	gets(B);
	system("cls");
	print_array(z);
	int i=1;
	while(i<=8)
	{
	    int i,j,k,l;
	   	puts(A);
        check_validity(z,'x');
		system("cls");
		print_array(z);
		printf("\n\n\n\n\n");
		if (win_condition(z,'x'))
            {
                printf("Player 1 wins!\n");
                return 0;
            }
		puts(B);
		check_validity(z,'o');
		system("cls");
		print_array(z);
		printf("\n\n\n\n\n");
		if (win_condition(z,'o'))
            {
                printf("Player 2 wins!\n");
                return 0;
            }
        i++;
	}
	return 0;
}
