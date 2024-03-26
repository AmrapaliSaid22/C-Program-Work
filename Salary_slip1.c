#include <stdio.h>
#include <stdlib.h>

int main() {
	int empid;
	char empname[10];
	int salary;
	float hra,ta,ma,sa,pf,finalsalary;
	
	printf("Enter the employee id :");
	scanf("%d",&empid);
	
	printf("Enter the employee Name :");
	scanf("%s",&empname);
	
	printf("Enter the employee Salary :");
	scanf("%d",&salary);
	
	hra=salary*0.24;
	ta=salary*0.10;
	ma=salary*0.5;
	sa=salary*0.5;
	pf=salary*0.18;
	finalsalary=hra+ta+ma+salary-pf;
	printf("-------------Salary Slip------------------");
	
	printf("\nHouse Rent Allowance \t:\t %.2f",hra);
	printf("\nTravilling Allowance \t:\t %.2f",ta);
	printf("\nMediacl Allowance \t:\t %.2f",ma);
	printf("\nSpecial Allowance \t:\t %.2f",sa);
	printf("\nProvidant Found \t:\t %.2f",pf);
	printf("\nfinal Salary \t\t:\t %.2f",finalsalary);
	printf("\n------------------------------------------");
	
	return 0;
}

