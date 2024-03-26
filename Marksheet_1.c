#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int rno;
	char name[10];
	int sub1,sub2,sub3,total;
	float perct;
	
	printf("Enter the roll no :");
	scanf(%d,&rollno);
	
	printf("\nEnter the student name :");
	scanf("%s",sname);
	
	printf("\nEnter the marks of three subjects ;");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	//.........calculation............
	total=sub1+sub2+sub3;
	perct=total/3;
	
	printf("\n.....................................");
	printf("\nRoll no\tName\tMaths\tComputer\tScience\tTotal\tPercentage");
	printf("\n%d\t%s\t%d\t%d\t%d\t\t%.2f"Roll no,sNAme,sub1,sub2,sub3,total,perct);
	printf("\n......................................................................");
	
	return 0;
}
