#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int rollno;
	int sub1,sub2,sub3;
	float perct,total;
	char name[10];
	
	printf(" Enter student name :");
	scanf("%s",&name);
	
	printf("Enter student roll no :");
	scanf("%d",&rollno);
	
	printf("Enter marks of sub1,sub2,sub3");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	total=sub1+sub2+sub3;
	
	perct=total/3;
	printf("---------------Marksheet---------------------);
	printf("\nmaths :%d",sub1);
	printf("\nenglish :%d",sub2);
	printf("\nhistory :%d",sub3);
	printf("\nTotal :%f",total);
	printf("\nPercentage :%f",perct);
	
	
	return 0;
}
