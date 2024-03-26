#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,sum=0;
	
	i=1;
	
	while(i<=20)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
				sum=sum+i;
		}
		i++;
			
	}
	
		printf("\nSum of all odd numbers is : %d",sum);
		
	
	return 0;
}
