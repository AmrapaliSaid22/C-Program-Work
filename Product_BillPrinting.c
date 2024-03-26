#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int prodId;
	char prodName[10];
	float price,total,cgst,sgst;
	int quantity;
	float gst,finalTotal;
	printf("Enter Product Id :");
	scanf("%d",&prodId);
	
	printf("Enter Product name :");
	scanf("%s",&prodName);
	
	printf("Enter Product price :");
	scanf("%f",&price);
	
	printf("Enter product Quantity :");
	scanf("%d",&quantity);
	
//	printf("---------------Product Bill--------------------");
	
	total = price * quantity;
	cgst = total *0.06;
	sgst = total *0.06;
	gst = cgst + sgst;
	finalTotal = total + gst;
	
		
	printf("\n---------------Product Bill--------------------");
	
	printf("\nTotal \t\t:\t %.2f",total);
	printf("\nCGST \t\t:\t %.2f",cgst);
	printf("\nSGST \t\t:\t %.2f",sgst);
	printf("\nGST \t\t:\t %.2f",gst);
	printf("\nFinal Total \t:\t %.2f",finalTotal);
	
	return 0;
}
