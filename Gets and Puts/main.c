#include<stdio.h>

int main()
{
    //'\o' is used for end/null char in array like char name[20]={'r','o','h','i','t','\o'};
    char name[20];
    printf("enter your name");
    gets(name);
    printf("entered name is: ");
    puts(name);
	return 0;
}
