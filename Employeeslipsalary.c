#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int empid;
	char empname[10];
	int salary;
	float hra,ta,ma,sa,pf,finalsalary;
	
	printf("Enter the employee id:");
	scanf("%d",&empid);
	
	printf("Enter the employee Name:");
	scanf("%s",&empname);
	
	printf("Enter the employee Salary:");
	scanf("%d",&salary);
	
	hra=salary*0.24;
	ta=salary*0.10;
	ma=salary*0.5;
	sa=salary*0.5;
	pf=salary*0.18;
	finalsalary=hra+ta+ma+salary-pf;
	printf("\thra\t=\t\t%f\n\tta\t=\t\t%f\n\tma\t=\t\t%f\n\tsa\t=\t\t%f\n\tpf\t=\t\t%f\n\tfinalsalary\t=\t%d");
	
	
	
	return 0;
}
