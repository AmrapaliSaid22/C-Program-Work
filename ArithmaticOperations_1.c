#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
	int sub,sum,mux,div,rem;
	
	printf("Enter first number :");
	scanf("%d",&n1);
	printf("Enter 2nd number :");
	scanf("%d",&n2);
	//    Addition....
	sum=n1+n2;
	printf("\nAddition is :%d",sum);
	//    Subtrsction....
	sub=n1-n2;
	printf("\nSubtraction is :%d",sub);
	//    Multiplication.....
	mux=n1*n2;
	printf("\nMultiplication is :%d",mux);
    //    Division....
	div=n1/n2;
	printf("\nDivision is :%d",div);
	// Modulo (remainder)...
	rem=n1%n2;
	printf("\nRemainder is : %d",rem);

    return 0;
}

