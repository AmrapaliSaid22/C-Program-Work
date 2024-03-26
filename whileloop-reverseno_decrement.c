#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	i=10; //initialization
	
	while(i>=1) //this code will be reverse execute in 10 times...
	{
		printf("\n %d ",i);  //10 9 8 7 6 5 4 .....1
		i--; //substraction 
	 } 
	 printf("\nThank you...");
	return 0;
}
