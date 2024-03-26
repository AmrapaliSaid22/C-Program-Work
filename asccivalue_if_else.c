#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ch;
	scanf("%c",&ch); //ch=1  49
   
   	if ((ch>=65)&&(ch<=90))
	{
		printf("%c is a Capital alphabate",ch);
	}

	else if ((ch>=97)&&(ch<=122))
	{	
	printf("\nCharacter is small alphabate",ch);
   }
	else if ((ch>=48)&&(ch<=57))
   {
		printf("\nCharacter is a Number",ch);
   }
	else 
	{
		printf("\nInvalid Character");
	}
      printf("\nASCII value of %c = %d",ch,ch);
	return 0;
}
