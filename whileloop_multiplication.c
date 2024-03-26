#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,n,ans;
	
	printf("Enter any number");
	
	scanf("%d",&n);
	
	i=1;
	
	while(i<=10)
	{
		ans=n*i;
		
		printf("\n%d",ans);
		
		i++;
	}
	return 0;
}
