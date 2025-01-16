#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int count = 0, vowels = 0;
    char str[100], c;
    printf("Enter a string in which you want to find number of vowels: ");
    gets(str);
    while(str[count] != '\0')
    {
          c = str[count];
          if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U')
		  {
          vowels++;
          printf("%c", c);
		  }
     count++;
   }
   printf("\n");
   printf("NUMBER OF VOWELS In Given string Are: %hu \n", vowels);
   return 0;
}