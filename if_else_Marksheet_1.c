#include <stdio.h>
#include <stdlib.h>

int main() {
	int rollNo ;
	char studename[10];
	int sub1,sub2,sub3,total;
	float perct;
	
	printf("Enter student Roll No :");
	scanf("%d",&rollNo);
	printf("Enter Student Name :");
	scanf("%s",&studename);
	printf("Enter Marks for Three Subject :");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	total=sub1+sub2+sub3;
	perct=total/3;
	printf("\nROLLNO\tNAME\tMATH\tELECT\tCOMP\tTOTAL\tPERCENTAGE");
	printf("\n--------------------------------------------------------------------------------------------------");
	printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",rollNo,studename,sub1,sub2,sub3,total,perct);
	
	
	return 0;
}






