#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
	int a[5][2]={{0,1},{1,2},{2,3},{3,4},{4,5}};
	int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<2;j++)

	printf("\na[%d][%d]=%d",i,j,a[i][j]);
}
	return 0;
}
