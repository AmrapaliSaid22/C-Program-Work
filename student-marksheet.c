#include <stdio.h>
#include <stdlib.h>

int main() {
	int rno;
	char sname[10];
	int sub1,sub2,sub3,total;
	float perct;
	
	printf("Enter Roll No ");
	scanf("%d",&rno);
	
	printf("Enter Student Name ");
	scanf("%s",sname); //no need & sign in S ( String )
	
	printf("Enter Marks for three subject..");
	scanf("%d%d%d"&sub1,sub2,&sub3);
	
	// calculate total 
	
	total =sub1+sub2+sub3;
	perct = total/3;
	
	printf("\n....................Marksheet.....................");
	printf("\n\t\\tRollno\tName\tMath\tElect\tComp\tTotal\tperct");
    printf("\n..................................................");
    printf("\n%d\t%s\t%d\t%d\t%d\t$d\t%.2f",rno,sname,sub1,sub2,sub3,total,perct);
    printf("\n...................Thank You......................");
    
    
	return 0;
}
